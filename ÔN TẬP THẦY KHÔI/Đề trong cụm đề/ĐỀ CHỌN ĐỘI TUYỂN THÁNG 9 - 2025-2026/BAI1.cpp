#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main (){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    
    int n;cin >> n;
    bool d1 = false,d2 = false,d3 = false;
    string st1;
    cin >> st1;
    for(char i : st1){
        if(isalpha(i)) d1 = true;
        if(isdigit(i)) d2 = true;
        if(isupper(i)) d3 = true;
    }
    int res = 0,dodai = 0, thieu = 0;

    if(!d1) thieu ++;
    if(!d2) thieu ++;
    if(!d3) thieu ++;
    dodai = max (0 , n - 6);
    res = max(dodai, thieu);
    cout << res;
    return 0;
}