#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define el "\n"
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("PACK.INP", "r", stdin);
    freopen("PACK.OUT", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<ll> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());               
    sort(b.begin(), b.end(), greater<ll>()); 
    ll an = a[0];       
    ll rmn = LLONG_MAX; 
    int kmx = min(n, m);
    for (int k = 1; k <= kmx; k++) {
        int i = k - 1;
        rmn = min(rmn, a[i] + b[i]);
        ll cand = rmn;
        if (k < n) cand = min(cand, a[k]); 
        an = max(an, cand);
    }
    cout << an << el;
    return 0;
}