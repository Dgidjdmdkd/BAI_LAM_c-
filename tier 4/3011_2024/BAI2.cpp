#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define ll long long
#define bl "BAI2"
using namespace std;
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    
    int n,k,re = 0;
    cin >> n >> k;
    vector<int> vt(n);
    for(int &x : vt) cin >> x;
    sort(vt.begin(),vt.end(),greater());
    for(int i = 0 ; i < n ; i++){
        if(i < n-k){
            re+=vt[i];
        }
        if((i < n)&&(i > n-k-1)){
            re-=vt[i];
        }
    }
    cout << re;
    return 0;
}