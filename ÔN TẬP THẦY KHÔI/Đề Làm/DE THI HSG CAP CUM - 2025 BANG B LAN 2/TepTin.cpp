#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    freopen("TepTin.INP","r",stdin);
    freopen("TepTin.OUT","w",stdout);
    
    int n,cnt = 0,res = 0;
    string str;
    cin >> n;
    cin >> str;
    for(int i = 0 ; i < n ; i++){
        if(str[i] == 'x') cnt++;
        else{
            if(cnt > 2) res = cnt - 2;
            cnt = 0;
        }
    }
    if(cnt > 2) res = cnt - 2;
    cout << res;
    return 0;
}