#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    long long a = 0,res = 0,sum = 0;
    cin >> a;
    for(int i = 1 ; i * i <= a; i++){
        long long sq = i * i;
        if(sq % 2 == 1){
        res++;
        sum += sq;
        }
    }
    cout << res << '\n' << sum;
    return 0;
}