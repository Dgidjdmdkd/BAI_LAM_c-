#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h>
#define BL "TongOn_23_10_24"
#define el "\n"
typedef long long ll;
typedef int in;
using namespace std;

//shift + alt + up/down (copy col up/down)
//ctrl + d (del col)

void VO(){
    freopen(BL".INP","r",stdin);
    freopen(BL".OUT","w",stdout);
}

// ===== PRIME & DIVISOR =====
vector<bool> sieve_of_e(in n){
    vector<bool> sieve(n+1,true);
    sieve[0] = sieve[1] = false;
    for(in i = 2 ; i * i <= n ; i++){
        if(sieve[i]){
            for(in j = i * i ; j <= n ; j+= i){
                sieve[j] = false;
            }
        }   
    }
    return sieve;
}

in check_prime(in a){
    if(a < 2) return false;
    if(a == 2 || a == 3) return true;
    if(a % 2 == 0 || a % 3 == 0) return false;
    for(int i = 5 ; i * i <= a ; i += 6)
        if(a % i == 0 || a % (i + 2) == 0)
            return false;
    return true;
}

// Prime factorization
map<ll, in> factorize(ll n){
    map<ll, in> factors;
    for(ll i = 2; i * i <= n; i++){
        while(n % i == 0){
            factors[i]++;
            n /= i;
        }
    }
    if(n > 1) factors[n]++;
    return factors;
}

// Count divisors
ll count_divisors(ll n){
    ll cnt = 0;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            cnt++;
            if(i * i != n) cnt++;
        }
    }
    return cnt;
}

// ===== SLIDING WINDOW / GREEDY =====
//maxsum contiguous subarray || sd sliding windows || k cố định
ll mxsumc (vector<in> & vt , int k){
    in n = vt.size();
    ll cursum = 0, mxsum = 0;
    for(int i = 0 ; i < k ; i ++)
        cursum += vt[i];
        mxsum = cursum;
    for(int i = k ; i < n ; i++){
        cursum = cursum + vt[i] - vt[i - k];
        mxsum = max(mxsum, cursum);
    }
    return mxsum;
}

// ===== TWO POINTERS =====
// find sum of 2 numbers in an array equal k (sorted)
bool psum2(vector<in> vt , in k){
    sort(vt.begin(), vt.end());
    in l = 0 , r = vt.size() - 1;
    while( l < r ){
        in cursump = vt[l] + vt[r];
        if(cursump == k) return true;
        if(cursump < k) l++;
        else r--;
    }
    return false;
}

// find max - min in array
pair<in, in> find_mx_mn(vector<in> vt){
    in mx = *max_element(vt.begin(), vt.end());
    in mn = *min_element(vt.begin(), vt.end());
    return {mx, mn};
}

// ===== NUMBER SYSTEMS =====
// decimal to binary
string dectobi(ll te){
    if(te <= 0) return "0";
    string res = "";
    while( te > 0 ){
        res += (char)((te % 2) + '0');
        te /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

// binary to decimal
ll bitodec(string s){
    ll res = 0;
    for(char c : s){
        res = res * 2 + (c - '0');
    }
    return res;
}

// ===== GCD / LCM / MODULAR =====
ll const MOD = 1e9 + 7;

ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return (a / gcd(a, b)) * b;
}

// safe multiplication (tránh overflow)
ll mulmod(ll a, ll b){
    return ((a % MOD) * (b % MOD)) % MOD;
}

// safe addition
ll addmod(ll a, ll b){
    return ((a % MOD) + (b % MOD)) % MOD;
}

// binary pow (a ^ b % MOD)
ll binapow(ll a, ll b){
    ll re = 1;
    a %= MOD;
    while(b > 0){
        if(b % 2 == 1) re = (re * a) % MOD;
        a = (a * a) % MOD;
        b /= 2;
    }
    return re;
}

// modular inverse (a^-1 mod MOD) using Fermat's little theorem
ll modinv(ll a){
    return binapow(a, MOD - 2);
}

// ===== SPECIAL NUMBERS =====
// perfect square
bool specnum (ll t){
    ll sq = (ll) sqrt(t);
    return sq * sq == t;
}

// num equal to sum of proper positive divisors (perfect number)
bool specnum_2 (ll t){
    if(t <= 1) return false;
    ll sum = 1;
    for(ll i = 2 ; i * i <= t ; i++){
        if( t % i == 0){
            sum += i;
            if(i * i != t){
                sum += t / i;
            }
        }
    }
    return sum == t;
}

// ===== SORTING =====
struct ptu{
    in val , key;
};

bool cmp_1 (ptu a, ptu b){
    if(a.val != b.val) return a.val < b.val;
    return a.key > b.key;
}

// ===== PREFIX SUM =====
// prefix sum 1d
vector<ll> buildprefix(vector<in> vt, in n){
    vector<ll> pref(n + 1, 0);
    for(int i = 1 ; i <= n ; i++) pref[i] = pref[i - 1] + vt[i - 1];
    return pref;
}

// prefix sum 2d (0-indexed input, 1-indexed prefix)
vector<vector<ll>> buildprefix2d (vector<vector<in>> vt, in m , in n){
    vector<vector<ll>> pref2d(m + 1, vector<ll> (n + 1, 0));
    for(int i = 1 ; i <= m ; i++){
        for(int j = 1 ; j <= n ; j++){
            pref2d[i][j] = vt[i-1][j-1] + pref2d[i - 1][j] + pref2d[i][j - 1] - pref2d[i - 1][j - 1];
        }
    }
    return pref2d;
}

// query sum in 2d from (r1,c1) to (r2,c2) [1-indexed]
ll query2d(vector<vector<ll>>& pref2d, in r1, in c1, in r2, in c2){
    return pref2d[r2][c2] - pref2d[r1-1][c2] - pref2d[r2][c1-1] + pref2d[r1-1][c1-1];
}

// ===== MATRIX OPERATIONS =====
// rotate matrix 90 degrees clockwise (n * n)
vector<vector<in>> rotate_mtx (vector<vector<in>> vt , in n){
    vector<vector<in>> roted(n, vector<in> (n, 0));
    for(in i = 0 ; i < n ; i++){
        for(in j = 0 ; j < n ; j++){
            roted[j][n - i - 1] = vt[i][j];
        }
    }
    return roted;
}

// transpose matrix
vector<vector<in>> transpose_mtx(vector<vector<in>> vt, in m, in n){
    vector<vector<in>> trans(n, vector<in>(m, 0));
    for(in i = 0; i < m; i++){
        for(in j = 0; j < n; j++){
            trans[j][i] = vt[i][j];
        }
    }
    return trans;
}

// ===== DYNAMIC PROGRAMMING =====
// LIS: Longest Increasing Subsequence (O(n^2))
in DP_lis_n2(vector<in> vt, in n){
    vector<in> dp(n, 1);
    in re = 1;
    for(in i = 1 ; i < n ; i++){
        for(in j = 0 ; j < i ; j++){
            if(vt[i] > vt[j]) dp[i] = max(dp[i], dp[j] + 1);
        }
        re = max(re, dp[i]);
    }
    return re;
}

// LIS: Longest Increasing Subsequence (O(n log n)) using binary search
in DP_lis_nlogn(vector<in>& vt, in n){
    vector<in> lis;
    for(in i = 0; i < n; i++){
        auto it = lower_bound(lis.begin(), lis.end(), vt[i]);
        if(it == lis.end()) lis.push_back(vt[i]);
        else *it = vt[i];
    }
    return lis.size();
}

// LCS: Longest Common Subsequence
in LCS(string a, string b){
    in n = a.length(), m = b.length();
    vector<vector<in>> dp(n + 1, vector<in>(m + 1, 0));
    for(in i = 1; i <= n; i++){
        for(in j = 1; j <= m; j++){
            if(a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[n][m];
}

// Knapsack 0/1
ll knapsack_01(vector<in>& weight, vector<in>& value, in W){
    in n = weight.size();
    vector<vector<ll>> dp(n + 1, vector<ll>(W + 1, 0));
    for(in i = 1; i <= n; i++){
        for(in w = 1; w <= W; w++){
            if(weight[i-1] <= w){
                dp[i][w] = max(dp[i-1][w], dp[i-1][w-weight[i-1]] + value[i-1]);
            } else {
                dp[i][w] = dp[i-1][w];
            }
        }
    }
    return dp[n][W];
}

// Coin change (minimum coins)
in coin_change(vector<in>& coins, in amount){
    vector<in> dp(amount + 1, INT_MAX);
    dp[0] = 0;
    for(in i = 1; i <= amount; i++){
        for(in coin : coins){
            if(coin <= i && dp[i - coin] != INT_MAX){
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    return dp[amount] == INT_MAX ? -1 : dp[amount];
}

// ===== SEARCHING & SORTING =====
// binary search
in binary_search_idx(vector<in>& vt, in target){
    in l = 0, r = vt.size() - 1;
    while(l <= r){
        in mid = l + (r - l) / 2;
        if(vt[mid] == target) return mid;
        if(vt[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

// ===== GRAPH BASICS (tùy chọn) =====
// Adjacency list
vector<in> adj[100005];

// DFS
void dfs(in u, vector<bool>& visited){
    visited[u] = true;
    for(in v : adj[u]){
        if(!visited[v]){
            dfs(v, visited);
        }
    }
}

// BFS
void bfs(in start){
    vector<bool> visited(100005, false);
    queue<in> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        in u = q.front();
        q.pop();
        for(in v : adj[u]){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

// ===== UTILITIES =====
// Fast I/O
void fast_io(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    fast_io();
    
    return 0;
}
