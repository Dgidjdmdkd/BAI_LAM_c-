#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("CapSo.INP", "r",stdin);
    freopen("CapSo.OUT", "w",stdout);
    
    int n, res = 0; cin>> n;
    vector<long long> vt1(n);
    for(int i = 0; i < n ; i++){
        cin>>vt1[i];
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1; j < n; j++){
            if((vt1[i] + vt1[j]) % 2 == 0) res++;
        }
    }
    cout << res;
    return 0;
}