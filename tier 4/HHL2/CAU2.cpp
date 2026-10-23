#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "CAU2"
#define ll long long
#define el '\n'
using namespace std;

int main () {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);

    ll m,n;
    cin >> m >> n;
    vector<ll> uocn,uocm;
    for(ll i = 2 ; i * i <= m ; i++){
        if(m % i == 0){
            uocm.push_back(i);
            while(m%i==0)m/=i;
        }
    }
    for(ll i = 2 ; i * i <= n ; i++){
        if(n % i == 0){
            uocn.push_back(i);
            while(n%i==0)n/=i;
        }
    }
    if(m > 1)uocm.push_back(m);if(n > 1)uocn.push_back(n);
    if(uocm == uocn){
        cout << "TUONG DUONG\n";
        for(int x : uocm) cout << x <<" ";cout<<el;
    }else{
        cout <<"KHONG TUONG DUONG\n";
    }
    return 0;
}