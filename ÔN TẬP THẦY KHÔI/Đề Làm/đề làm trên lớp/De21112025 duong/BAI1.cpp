#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll =long long;

bool check(ll n){
    ll d=1;
    ll s=0;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
           ll cnt=0;
           while(n%i==0){
              cnt++;
              n/=i;
           }
           d*=cnt+1;
           s+=i;
        }
    }
    if(n>1){
        d*=2;
        s+=n;
    }
    return d>s;
}
int main()
{
    ll n,a,b; cin>>n>>a>>b;
    ll dem=0;
    for(ll i=a;i<=b;i++){
        if(check(i)) dem++;
    }
    cout << dem << endl;
    return 0;
}