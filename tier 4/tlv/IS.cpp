#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "IS"
#define el "\n"
#define ll long long
using namespace std;

    int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);
    int n;ll re = 0;
    cin >> n;
    vector<ll> vt1(n),vt2(n),te(n);
    for(int i = 0 ; i < n ; i++) cin >> vt1[i];
    for(int i = 0 ; i < n ; i++) cin >> vt2[i];

    for(int i = 0 ; i < n ; i++){
        te[i] = vt2[i];
        for(int j = 0 ; j < i ; j ++){
            if(vt1[j] < vt1[i]) te[i]= max(te[i],te[j] + vt2[i]);
        }
       re = max(re, te[i]);
    }
    cout << re << el;
    return 0;
}