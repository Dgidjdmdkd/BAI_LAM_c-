#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "LUYTHUA"
#define el "\n"
#define ll long long

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);

    int a,n,d;
    cin >> a >> n >> d;
    signed long long su=1;
    for(int i = 1 ; i <= n ; i++) su += pow(a,d*i);
    cout << su;
    return 0;
}