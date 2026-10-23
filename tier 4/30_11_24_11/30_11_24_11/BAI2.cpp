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

    int n;
    cin >> n;
    map<ll,int> mp;
    for(int i = 1 ; i <= n ; i++){
        ll x;
        cin >> x;
        mp[x]++;
    }
    pair<ll,int> mx={0,0};
    for(auto &x : mp){
        if(x.second > mx.second) mx=x;
    }
    cout << mx.first << ' ' << mx.second << el;
    return 0;
}