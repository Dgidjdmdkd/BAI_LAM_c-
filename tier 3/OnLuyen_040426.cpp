#pragma GCC optimize("Ofast")
#define Max_int 1e6 + 7
#include <bits/stdc++.h>
using namespace std;
vector<bool> sang (int n){
    vector<bool> isprime(n,true);
    isprime[1] = isprime[0] = false;
    for(int i = 2 ; i * i < n ; i++){
        if(isprime[i]){
            for(int j = i * i ; j < n ; j += i){
                isprime[j] = false;
            }
        }
    }
    return isprime;
}
vector<bool> segmentedsieve(long long L, long long R){

}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen("Onluyen_040426.INP","r",stdin);
    freopen("Onluyen_040426.OUT","w",stdout);


    return 0;
}