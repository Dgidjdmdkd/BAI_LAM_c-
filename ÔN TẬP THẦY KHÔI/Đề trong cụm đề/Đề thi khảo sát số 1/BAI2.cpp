#include <bits/stdc++.h>
using namespace std;
int main (){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);

    string n = "",res = "";
    int count = 1;
    cin >> n;
    for(int i = 1 ; i <= n.size();i++){
            if(i < n.size() && n[i] == n[i - 1]) count++;
        else{
            if(count > 1) res += to_string(count);
            res += n[i];
            count = 1;    
        }
    }
    cout << res;
    return 0;
}