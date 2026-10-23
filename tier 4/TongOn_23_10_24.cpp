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
    freopen(BL".INP","w",stdout);
}

vector<bool> sieve_of_e(in n){
    vector<bool> sieve(n,true);
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
// 30-3-26-tier 3

//maxsum contiguous subarray || sd sliding windows || k cố định
ll mxsumc (vector<in> & vt , int k){
    in n = vt.size();
    ll cursum = 0,mxsum = 0;
    for(int i = 0 ; i < k ; i ++)
        cursum += vt[i];
    mxsum = cursum;
    for(int i = k ; i < n ; i++){
        cursum = cursum + vt[i] - vt[i - k];
        mxsum = max(mxsum,cursum);
    }
    return mxsum;
}
// find sum of 2 numbers in an array equal k (sorted)
bool psum2(vector<in> vt , in k){
    sort(vt.begin(),vt.end());
    in l = 0 , r = vt.size() - 1;
    while( l < r ){
        in cursump = vt[l] + vt[r];
        if(cursump == k) return true;
        if(cursump < k) r --;
        else l ++;
    }
    return false;
}
// decimal to binary
string dectobi(ll te){
    if(te <= 0) return "0";
    string res = "";
    while( te > 0 ){
        res += (char)((te % 2) + '0');
        te /= 2;
    }
    return res;
}
// gcd n lcm 
void gclc(ll a,ll b){
    in ucln = __gcd(a,b);
    in bcnn = ((a / ucln)*b);
}
// arithmetic progression ( + )
// Un = u1 + (n - 1) * d
// S = (n * (u1 + un)) / 2
// geometric progression ( * )
// Un = u1 * pow( q , n - 1);
// S = u1 * ( (pow(q,n) - 1) / ( q - 1) )

// modulo
ll const MOD = 1e9 + 7;
// safe mutiplication
ll mulmod(ll a, ll b){
    return ((a % MOD) * (b % MOD)) % MOD;
}

// binary pow (a ^ b % MOD)
ll binapow(ll a, ll b){
    ll re = 1;
    a %= MOD;
    while(b > 0){
        if(b % 2 == 1) re = (re * a) % MOD;
        a = ( a * a ) & MOD;
        b /= 2;
    }
    return re;
}

// check special number

// perfect square
bool specnum (ll t){
    return ((ll) sqrt(t) * (ll) sqrt(t)) == t;
}
// num equal to sum of proper positive divisors
bool specnum_2 (ll t){
    if(t <= 1) return false;
    ll sum = 1;
    for(int i = 2 ; i * i <= t ; i++){
        if( t % i == 0){
            sum += i;
            if(i * i != t){
                sum += t / i;
            }
        }
    }
    return sum == t;
}

// sort 
struct ptu{
    in val , key;
};
bool cmp_1 (ptu a,ptu b){
    if(a.val != b.val) return a.val < b.val;
    return a.key > b.key;
}

// prefix sum
// vt[1 -> n]
vector<int> buildprefix(vector<int> vt,in n){
    vector<int> pref(n + 1);
    for(int i = 1 ; i <= n ; i++) pref[i] = pref[i - 1] + vt[i];
    return pref;
}
// prefix sum 2d plan 1
// vt[1 -> m][1 = > n]
vector<vector<int>> buildprefix2d (vector<vector<int>> vt,in m , in n){
    vector<vector<int>> pref2d(n , vector<int> (n,0));
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            pref2d[i][j] = vt[i][j];
            if(i > 0)
                pref2d[i][j] += pref2d[i - 1][j];
            if(j > 0)
                pref2d[i][j] += pref2d[i][j - 1];
            if(i > 0 && j > 0)
                pref2d[i][j] += pref2d[i - 1][j - 1]; 
        }
    }
    return pref2d;
}
// prefix sum 2d plan 2
vector<vector<in>> buildprefix2d_2 (vector<vector<in>> vt, in m ,in n){
    vector<vector<in>> pref2d(n,vector<in> (n,0));
    for(in i = 1 ; i <= m ; i++){
        for(in j = 1 ; j <= n ; j++){
            pref2d[i][j] = vt[i][j] + pref2d[i - 1][j] + pref2d[i][j - 1] - pref2d[i - 1][j - 1];
        }
    }
    return pref2d;
}
// rotatematrix (n * n)
vector<vector<in>> rotate_mtx (vector<vector<in>> vt , in n){
    vector<vector<in>> roted(n,vector<in> (n,0));
    for(in i = 0 ; i < n ; i++){
        for(in j = 0 ; j < n ; j++){
            roted[j][n - i - 1] = vt[i][j];
        }
    }
    return roted;
}

// DP_LIS the longest increasing subarray 

in DP_lis(vector<in> vt, in n){
    vector<in> dp(n + 1);
    in re = 0;
    for(in i = 1 ; i < n ; i++){
        for(in j = 0 ; j < i ; j++){
            if(vt[i] > vt[j]) dp[i] = max(dp[i],dp[i] + 1);
        }
        re = max(re,dp[i]);
    }
    return re;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //VO();
    return 0;
}