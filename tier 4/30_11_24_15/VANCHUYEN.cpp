#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "VANCHUYEN"
#define el "\n"
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //freopen(BL".INP", "r", stdin);
    //freopen(BL".OUT", "w", stdout);
    int t, n;
    cin >> t >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    int tong = 0;
    for (int i = 0; i < n; ++i) {
        if (tong + a[i] <= t) {
            tong += a[i];
        }
    }
    cout << tong << endl;
    return 0;
}