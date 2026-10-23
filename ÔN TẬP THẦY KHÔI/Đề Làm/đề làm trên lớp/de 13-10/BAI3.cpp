#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("BAI3.INP","r",stdin);
    freopen("BAI3.OUT","w",stdout);
    int n;
    cin >> n;
    vector<int> vt1(n);
    vector<int> tmp(n,1);
    for(int i = 0 ; i < n ; i ++) cin >> vt1[i];
    int res = 1;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < i ; j++){
            if(vt1[i] >= vt1[j]){
                tmp[i] = max(tmp[i],tmp[j] + 1);
            }
        }
        res = max(res,tmp[i]);
    }
    cout << res;
    return 0;
}