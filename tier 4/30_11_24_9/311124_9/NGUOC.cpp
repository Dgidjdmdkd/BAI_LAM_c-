#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "NGUOC"
#define el "\n"
#define ll long long

using namespace std;
ll dao(ll n){
    ll su = 0;
    while(n > 0){
        su = (su*10) + (n % 10);
        n/=10;
    }
    return su;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);

    int k,m;
    while(cin >> k >> m){
        ll sum =k;
        for(int i = 0 ; i < m ; i++){
            sum = dao(sum + k);
            cout << sum << ' ';
        }
        cout << el;
    }
    return 0;
}