#include <bits/stdc++.h>
using namespace std;
bool snt(int a){
    if(a < 2) return false;
    if(a == 2 || a == 3) return true;
    if(a % 2 == 0 || a % 3 == 0) return false;
    for(int i = 5 ; i * i <= a ; i+=6){
        if(a % i == 0 || a % (i + 2) == 0) return false;
    }
    return true;
}
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("SPNUM.INP","r",stdin);
    freopen("SPNUM.OUT","w",stdout);
    long long n;
    int cnt = 0;
    cin >> n;
    long long temp = sqrt(n);
    for(int i = 2 ; i <= temp; i ++){
        if(snt(i)) cnt++;
    }
    cout << cnt;
    return 0;
}