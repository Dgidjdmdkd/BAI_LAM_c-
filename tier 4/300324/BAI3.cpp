#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "BAI3"
#define el "\n"
#define ll long long
using namespace std;
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);
    
    string st;
    int cnt = 0,dr=0;
    getline(cin,st);
    for(char x : st){
        if(x == 'L'){
            if(dr==1){
                cnt++;
                dr=0;
            }
        }else if(x == 'R'){
            if(dr==0){
                cnt++;
                dr=1;
            }
        }else{
            cnt++;
        }
    }if(dr==0)cnt++;
    cout<<cnt<<el;
    return 0;
}