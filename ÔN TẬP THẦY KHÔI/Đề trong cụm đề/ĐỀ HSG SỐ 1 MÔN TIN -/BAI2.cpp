#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);

    long long n,sum = 0,res = 0;
    cin >> n;
    vector<long long> tmp(n + 1);
    tmp[0] = 0;
    for(int i = 1 ; i <= n ; i++){
        cin >> tmp[i];
    }
    for(int i = 1 ; i <= n ; i++){
        sum += tmp[i];
        res += sum;
    }
    cout<< res;
    return 0;
}