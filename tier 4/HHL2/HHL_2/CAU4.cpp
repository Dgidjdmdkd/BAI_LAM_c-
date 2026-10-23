#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "CAU4"
#define ll long long
using namespace std;
int main(){
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    int n; cin >> n;
    vector<ll> a(n+1), S(n+1, 0);
    for(int i = 1; i <= n; i++){
    cin >> a[i]; S[i] = S[i-1] + a[i];
    }

    ll re = 0;
    for(int i = 1; i <= n; i++) re += i * a[i];

    ll tot = 0; 
    for(int p = 1; p <= n; p++){
        ll df = S[p-1] - a[p] * (p-1);
        ll de = a[p] * (n-p) - (S[n] - S[p]);
        tot = max({tot, df, de});
    }
    cout << (re + tot) << "\n";
}