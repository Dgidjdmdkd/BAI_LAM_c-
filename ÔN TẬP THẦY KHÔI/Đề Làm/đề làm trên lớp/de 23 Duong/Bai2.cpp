#include <bits/stdc++.h>
using namespace std;
int cong (int a){
    int res = 0;
    while(a > 0){
        res += a % 10;
        a/=10;
    }
    return res;
}
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("Bai2.inp","r",stdin);
    freopen("Bai2.out","w",stdout);
    
    int a,res = 0;
    cin >> a;
    vector<int> vt(a);
    for(int i = 0 ; i < a; i ++){
        cin >> vt[i];
    }
    for(int i = 0 ; i < a ; i++){
        res = cong(vt[i]);
        while(res > 10){
            res = cong(res);
        }
        cout<< res <<' ';
    }
    return 0;
}