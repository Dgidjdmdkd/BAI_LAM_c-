#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "BAI2"
#define el "\n"
using namespace std;
int main (){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    int n,re=0;
    cin >> n;
    unordered_map<int,int> mp;
    for(int i = 0 ; i < n ; i++){
        int x;cin>>x;
        mp[x]++;
    }
    for(const auto &x : mp){
        if (x.second > re) {
            re = x.second;
        }
    }
    cout << re<<el;
    return 0;
}