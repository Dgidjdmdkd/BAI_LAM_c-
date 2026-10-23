#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    long long a,cnt = 0;
    cin >> a;
    for(int i = 1; i * i <= a; i++){
        if(a % i == 0){
            cnt++;
        if(i != a / i) cnt++;
        }
    }
    cout<< cnt;
    return 0;
}