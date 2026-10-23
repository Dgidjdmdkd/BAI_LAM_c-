#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "CSBN"
using namespace std;
int main (){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    
    ll n;
    if (!(cin >> n)) return 0;
    
    unordered_map<string,int> mp;
    for(ll i = 0 ; i < n ; i++){
        string x;cin >> x;
        mp[x]++;
    }
    ll res = 0;
    for(auto it = mp.begin() ; it != mp.end() ; ++it){
        int n = it->second;
        if(n == 2) res++;
        if(n > 2){
            while(n--){
                res += n;
            }
        }
    }
    cout <<res;
    return 0;
}
