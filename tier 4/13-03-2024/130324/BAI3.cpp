#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "BAI3"
using namespace std;

int main(){
    cout.tie(nullptr);
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    
    int n,res = 1;
    cin >> n;
    vector<int> vt(n),cnt(n,1);
    for(int i = 0 ; i < n ; i++){
        cin >> vt[i];
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            if(vt[j] < vt[i]){
                cnt[i] = max(cnt[i], cnt[j] + 1);
            }
        }
        res = max(res, cnt[i]);
    }
    cout << res;

    return 0;
}