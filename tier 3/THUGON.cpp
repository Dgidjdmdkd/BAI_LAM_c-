#include <bits/stdc++.h>
#define el "\n"
using namespace std;

void thugon(string &a){
    if(a.empty()) return;
    string res = "";
    char tmp = a[0];
    int cnt = 0;
    for(char &x : a){
        if(x == tmp){
            cnt ++;
        }else{
            if(cnt > 1){
                res += to_string(cnt);
            }
            res += tmp;
            tmp = x;
            cnt = 1;
        }
    }
    if(cnt > 1){
            res += to_string(cnt);
        }
        res += tmp;
    cout << res << el;
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen("THUGON.INP","r",stdin);
    freopen("THUGON.OUT","w",stdout);
    
    string s;
    while(cin >> s){
        thugon(s);
    }
    return 0;
}