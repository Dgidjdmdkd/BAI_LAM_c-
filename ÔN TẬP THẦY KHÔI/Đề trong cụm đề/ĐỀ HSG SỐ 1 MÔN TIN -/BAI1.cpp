#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    int n,a,b,c,t;
    long long res = 0;
    cin >> n >> a >> b >> c;
    for(int i = 1 ; i <= n ; i++){
        t = 10000 + 5000*( i - 1);
    }
    res = t + a * 500 + b * 200 + c * 100;
    cout<<res;
    return 0;
}