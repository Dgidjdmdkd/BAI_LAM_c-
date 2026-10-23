#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("Baiso1.inp","r",stdin);
    long long n, res = 0 , sum = 0;
    cin >> n;
    for(int i = 1; i * i <= n ; i++){
        long long sq = i * i;
        if(i % 2 == 0){
            res++;
            sum += sq;
        }
    }
    cout << res << "\n" << sum;
    return 0;
}