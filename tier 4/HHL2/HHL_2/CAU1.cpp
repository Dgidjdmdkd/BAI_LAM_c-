#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "CAU1"
using namespace std;

int main () {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    int n,k,re = 0;
    cin >> n >> k;
    vector<int> vt(n + 1);
    for(int i = 1 ; i <= n ; i++){
        cin >> vt[i];
    }
    for(int i = 1 ; i <= n ; i++){
        if(vt[i] >= vt[k] && vt[i] > 0) re++;
        else break;
    }
    cout << re;
    return 0;
}