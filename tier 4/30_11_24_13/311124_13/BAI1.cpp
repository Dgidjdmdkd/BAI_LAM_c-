#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "BAI1"
#define el "\n"
#define ll long long

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);

    int n;
    string a;
    cin >> n >> a;
    for(int i = 0 ; i < n ; i++) if(isupper(a[i])) a[i] = a[i] + 32;
    for(char x : a) cout << x;
    return 0;
}