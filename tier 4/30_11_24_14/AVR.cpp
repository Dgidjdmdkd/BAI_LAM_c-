#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "AVR"
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
    ll sum=0;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        ll tmp = 0,x = 0;
        cin >> x;
        tmp = x * (i + 1) - sum;
        sum += tmp;
        cout << tmp << ' ';
    }
    return 0;
}