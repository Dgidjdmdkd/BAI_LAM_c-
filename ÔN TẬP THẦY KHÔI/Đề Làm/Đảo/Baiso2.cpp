#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("Baiso2.inp","r",stdin);
    long long N, sum = 0;
    cin >> N;
    for(int i = 1; i * i <= N;i++){
        if(N % i == 0){
            long long j = N / i;
            if(i % 2 == 0) sum += i;
            if(j != i && i % 2 == 0) sum += i;
        }
    }
    cout << sum;
    return 0;
}