#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    freopen("BAI4.INP","r",stdin);
    freopen("BAI4.OUT","w",stdout);
    int k,g;
    long long res = 0;
    cin >> g >> k;
    vector<int> vt1(g);
    for(int i = 0 ; i < g ; i++ ){
        cin >> vt1[i];
    }
    for(int i = 0; i < g ; i++){
        for(int j = i + 1; j < g ; j++){
            if(vt1[i] + vt1[j] == k) res++;
        }
    }
    cout << res;
    return 0;
}