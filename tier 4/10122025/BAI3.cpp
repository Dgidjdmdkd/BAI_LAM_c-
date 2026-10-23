#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "BAI3"
#define ll long long
#define el "\n"
using namespace std;

    bool check(ll n){
        if(n < 2) return false;
        if(n == 2 || n == 3) return true;
        if(n % 2 == 0 || n % 3 == 0) return false;
        for(ll i = 5; i * i <= n ; i+=6)
            if(n % i == 0 || n % (i + 2) == 0) return false;
    
        return true;
    }
int main (){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    
    int n,re=0;
    cin >> n;
    vector<int> vt(n+1),pref(n+1,0);
    for(int i = 1 ; i <= n ; i++){
        cin >> vt[i];
        pref[i] = pref[i-1] + vt[i];
    }
    
    for(int i = 1 ; i <= n ; i ++){
        for(int j =1 ; j <= n ; j ++){
            if(check(pref[j] - pref[i-1]))re++;
        }
    }
    cout << re << el;
    return 0;
}