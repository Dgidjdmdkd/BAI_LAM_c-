#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "HERONS"
#define el "\n"
#define ll long long

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);

    ll n , m;
    cin >> n >> m;
    cout << max((n+1)/2,(m+1)/2) << ' ' << min(n,m);
    return 0;
}