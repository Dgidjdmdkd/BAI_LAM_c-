#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("TepTin.INP", "r",stdin);
    freopen("TepTin.OUT", "w",stdout);
    
    int a,cnt = 0,res = 0;
    cin >> a;
    string g1;
    cin >> g1;
    
    for(int i = 0 ; i < a ; i++){
        if(g1[i] == 'x'){
            cnt++;
        }else{
            if(cnt > 2){
            res += cnt - 2;
        }
    cnt = 0;
    }
}
    if(cnt > 2) res += cnt - 2;
    cout << res;
    return 0;
}