#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define ll long long
#define bl "BAI1"
using namespace std;
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    int n,re=0;
    cin >> n;
    while(n>0){
        re += n/5;
        n/=5;
    }
    cout << re;
    return 0;
}