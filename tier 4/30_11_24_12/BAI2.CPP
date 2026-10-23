#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "BAI2"
#define el "\n"
#define ll long long

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);

    int n,re=0;
    cin >> n;
    vector<int> vt(n);
    for(int &x : vt) cin >> x;
    for(int i = 0 ; i < n ; i ++){
        re = __gcd(re,vt[i]);
    }
    cout << re;
    return 0;
}