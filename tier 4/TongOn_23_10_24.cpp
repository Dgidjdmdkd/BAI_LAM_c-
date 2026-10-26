#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h>
#define BL "TongOn_23_10_24"
#define el "\n"
typedef long long ll;
using namespace std;

void VO()
{
	if (fopen(BL".INP", "r"))
	{
		freopen(BL".INP", "r", stdin);
		freopen(BL".OUT", "w", stdout);
	}
}

// PRIME & DIVISOR
vector<bool> sieve_of_e(int n)
{
	if (n < 0) return {};
	vector<bool> sieve(n + 1, true);
	if (n >= 0) sieve[0] = false;
	if (n >= 1) sieve[1] = false;
	for (ll i = 2; i * i <= n; i++)
	{
		if (sieve[i])
		{
			for (ll j = i * i; j <= n; j += i)
			{
				sieve[j] = false;
			}
		}
	}
	return sieve;
}

bool check_prime(int a)
{
	if (a < 2) return false;
	if (a == 2 || a == 3) return true;
	if (a % 2 == 0 || a % 3 == 0) return false;
	for (ll i = 5; i * i <= a; i += 6)
		if (a % i == 0 || a % (i + 2) == 0)
			return false;
	return true;
}

map<ll, int> factorize(ll n)
{
	map<ll, int> factors;
	for (ll i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			factors[i]++;
			n /= i;
		}
	}
	if (n > 1) factors[n]++;
	return factors;
}

ll count_divisors(ll n)
{
	if (n <= 0) return 0;
	ll cnt = 0;
	for (ll i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			cnt++;
			if (i * i != n) cnt++;
		}
	}
	return cnt;
}

// SLIDING WINDOW
ll mxsumc(const vector<int>& vt, int k)
{
	int n = vt.size();
	if (k > n || k <= 0) return 0;
	ll cursum = 0;
	for (int i = 0; i < k; i++) cursum += vt[i];
	ll mxsum = cursum;
	for (int i = k; i < n; i++)
	{
		cursum += vt[i] - vt[i - k];
		mxsum = max(mxsum, cursum);
	}
	return mxsum;
}

// TWO POINTERS
bool psum2(vector<int> vt, int k)
{
	sort(vt.begin(), vt.end());
	int l = 0, r = (int)vt.size() - 1;
	while (l < r)
	{
		ll cursump = (ll)vt[l] + vt[r];
		if (cursump == k) return true;
		if (cursump < k) l++;
		else r--;
	}
	return false;
}

pair<int, int> find_mx_mn(const vector<int>& vt)
{
	if (vt.empty()) return { 0, 0 };
	int mx = *max_element(vt.begin(), vt.end());
	int mn = *min_element(vt.begin(), vt.end());
	return { mx, mn };
}

// NUMBER SYSTEMS
string dectobi(ll te)
{
	if (te <= 0) return "0";
	string res = "";
	while (te > 0)
	{
		res += (char)((te % 2) + '0');
		te /= 2;
	}
	reverse(res.begin(), res.end());
	return res;
}

ll bitodec(const string& s)
{
	ll res = 0;
	for (char c : s)
	{
		res = res * 2 + (c - '0');
	}
	return res;
}

// GCD / LCM / MODULAR
ll const MOD = 1e9 + 7;

ll gcd(ll a, ll b)
{
	return b == 0 ? abs(a) : gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
	if (a == 0 || b == 0) return 0;
	return (abs(a) / gcd(a, b)) * abs(b);
}

ll addmod(ll a, ll b)
{
	return ((a % MOD + MOD) % MOD + (b % MOD + MOD) % MOD) % MOD;
}

ll mulmod(ll a, ll b)
{
	return (((a % MOD + MOD) % MOD) * ((b % MOD + MOD) % MOD)) % MOD;
}

ll binapow(ll a, ll b)
{
	ll re = 1;
	a = (a % MOD + MOD) % MOD;
	while (b > 0)
	{
		if (b % 2 == 1) re = mulmod(re, a);
		a = mulmod(a, a);
		b /= 2;
	}
	return re;
}

ll modinv(ll a)
{
	return binapow(a, MOD - 2);
}

// SPECIAL NUMBERS
bool specnum(ll t)
{
	if (t < 0) return false;
	ll sq = llround(sqrtl(t));
	return sq * sq == t;
}

bool specnum_2(ll t)
{
	if (t <= 1) return false;
	ll sum = 1;
	for (ll i = 2; i * i <= t; i++)
	{
		if (t % i == 0)
		{
			sum += i;
			if (i * i != t) sum += t / i;
		}
	}
	return sum == t;
}

// SORTING
struct ptu
{
	int val, key;
};

bool cmp_1(const ptu& a, const ptu& b)
{
	if (a.val != b.val) return a.val < b.val;
	return a.key > b.key;
}

// PREFIX SUM
vector<ll> buildprefix(const vector<int>& vt, int n)
{
	vector<ll> pref(n + 1, 0);
	for (int i = 1; i <= n; i++) pref[i] = pref[i - 1] + vt[i - 1];
	return pref;
}

vector<vector<ll>> buildprefix2d(const vector<vector<int>>& vt, int m, int n)
{
	vector<vector<ll>> pref2d(m + 1, vector<ll>(n + 1, 0));
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			pref2d[i][j] = vt[i - 1][j - 1] + pref2d[i - 1][j] + pref2d[i][j - 1] - pref2d[i - 1][j - 1];
		}
	}
	return pref2d;
}

ll query2d(const vector<vector<ll>>& pref2d, int r1, int c1, int r2, int c2)
{
	return pref2d[r2][c2] - pref2d[r1 - 1][c2] - pref2d[r2][c1 - 1] + pref2d[r1 - 1][c1 - 1];
}

// MATRIX OPERATIONS
vector<vector<int>> rotate_mtx(const vector<vector<int>>& vt, int n)
{
	vector<vector<int>> roted(n, vector<int>(n, 0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			roted[j][n - i - 1] = vt[i][j];
		}
	}
	return roted;
}

vector<vector<int>> transpose_mtx(const vector<vector<int>>& vt, int m, int n)
{
	vector<vector<int>> trans(n, vector<int>(m, 0));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			trans[j][i] = vt[i][j];
		}
	}
	return trans;
}

// DYNAMIC PROGRAMMING
int DP_lis_n2(const vector<int>& vt, int n)
{
	if (n <= 0) return 0;
	vector<int> dp(n, 1);
	int re = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (vt[i] > vt[j]) dp[i] = max(dp[i], dp[j] + 1);
		}
		re = max(re, dp[i]);
	}
	return re;
}

int DP_lis_nlogn(const vector<int>& vt, int n)
{
	vector<int> lis;
	for (int i = 0; i < n; i++)
	{
		auto it = lower_bound(lis.begin(), lis.end(), vt[i]);
		if (it == lis.end()) lis.push_back(vt[i]);
		else *it = vt[i];
	}
	return lis.size();
}

int LCS(const string& a, const string& b)
{
	int n = a.length(), m = b.length();
	vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (a[i - 1] == b[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	return dp[n][m];
}

ll knapsack_01(const vector<int>& weight, const vector<int>& value, int W)
{
	int n = weight.size();
	vector<vector<ll>> dp(n + 1, vector<ll>(W + 1, 0));
	for (int i = 1; i <= n; i++)
	{
		for (int w = 1; w <= W; w++)
		{
			if (weight[i - 1] <= w)
			{
				dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weight[i - 1]] + value[i - 1]);
			}
			else
			{
				dp[i][w] = dp[i - 1][w];
			}
		}
	}
	return dp[n][W];
}

int coin_change(const vector<int>& coins, int amount)
{
	vector<int> dp(amount + 1, INT_MAX);
	dp[0] = 0;
	for (int i = 1; i <= amount; i++)
	{
		for (int coin : coins)
		{
			if (coin <= i && dp[i - coin] != INT_MAX)
			{
				dp[i] = min(dp[i], dp[i - coin] + 1);
			}
		}
	}
	return dp[amount] == INT_MAX ? -1 : dp[amount];
}

// SEARCHING & GRAPH
int binary_search_idx(const vector<int>& vt, int target)
{
	int l = 0, r = (int)vt.size() - 1;
	while (l <= r)
	{
		int mid = l + (r - l) / 2;
		if (vt[mid] == target) return mid;
		if (vt[mid] < target) l = mid + 1;
		else r = mid - 1;
	}
	return -1;
}

vector<int> adj[100005];

void dfs(int u, vector<bool>& visited)
{
	visited[u] = true;
	for (int v : adj[u])
	{
		if (!visited[v])
		{
			dfs(v, visited);
		}
	}
}

void bfs(int start, int max_nodes = 100005)
{
	vector<bool> visited(max_nodes, false);
	queue<int> q;
	q.push(start);
	visited[start] = true;
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		for (int v : adj[u])
		{
			if (!visited[v])
			{
				visited[v] = true;
				q.push(v);
			}
		}
	}
}

void fast_io()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

int main()
{
	fast_io();
	VO();
	return 0;
}