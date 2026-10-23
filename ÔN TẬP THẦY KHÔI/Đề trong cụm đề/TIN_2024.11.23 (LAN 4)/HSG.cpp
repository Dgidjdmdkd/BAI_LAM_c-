#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("HSG.INP","r",stdin);
    freopen("HSG.OUT","w",stdout);
    int n,h = 0,hs = 0,res = 0;string a;
    cin >> n;
    cin.ignore();
    getline(cin,a);
    for(char x : a){
        if(x == 'H') h++;
        else if(x == 'S') hs+=h;
        else if(x == 'G') res+=hs;
    }
    cout << res;
    return 0;
}