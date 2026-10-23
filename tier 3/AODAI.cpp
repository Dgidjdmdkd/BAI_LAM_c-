#include <bits/stdc++.h>
#define el "\n"
using namespace std;
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen("AODAI.INP","r",stdin);
    freopen("AODAI.OUT","w",stdout);
    
    int n,res = 0;
    cin >> n;
    vector<int> vt(n);
    int n1 = 0,n2 = 0,n3 = 0,n4 = 0;
    for(int &x : vt){
        cin >> x;
        switch (x){
            case 1:
            n1++;
            break;
            case 2:
            n2++;
            break;
            case 3:
            n3++;
            break;
            case 4:
            n4++;
            break;
        }
    }
    res += n4;
    res += n3;
    n1 = n1 - n3;
    if(n1 < 0) n1 = 0;
    res += n2 / 2;
    if(n2 % 2 != 0){
        res += 1;
        n1 = n1 - 2;
        if(n1 < 0) n1 = 0;
    }
    if(n1 >0 )res += (n1 + 3)/4;
    cout << res;
    return 0;
}