#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "BAI4"
#define el "\n"
#define ll long long
using namespace std;
int check(ll x, ll y) {
    int cnt = 0;
    while (x > 0 || y > 0) {
        if (x % 10 == y % 10) {
            cnt++;
        }
        x /= 10;y /= 10;
    }
    return cnt;
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);
    
    ll n ;
    cin >> n;
    vector<ll>vt(n);
    for(ll &x : vt)cin>>x;
    ll re=0,tm=10;
    for(ll i = 0 ; i < n-1 ; i++){
        for(ll j = i+1 ; j < n ; j++){
            re+=check(vt[i],vt[j]);
        }
    }
    cout<<re<<el;
    return 0;
}