#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "LUCKY"
#define el "\n"
#define ll long long
using namespace std;
int check(int x){
    if(x == 1) return 1;
    int re = 1,tm = x;
    for(int i = 2 ; i * i <= x ; i++){
        if(tm % i == 0 ){
            re *= i;
            while(tm % i == 0){
                tm/=i;
            }
        }
    }
    if(tm >1) re*=tm;
    return re;
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);
    
    ll n,a,b;
    cin >> n >> a >> b;
    map<int,int> mp;
    int mxm = 0;
    for(int i = a ; i <= b ; i++){
        int re = check(i);
        mp[re]++;
        mxm = max(mxm,mp[re]);
    }
    cout << mxm << el;
    return 0;
}