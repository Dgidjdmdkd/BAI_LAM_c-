#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h> 
#define ll long long 
#define el "\n"
#define bl "CBAI4"

using namespace std; 
    
int sub1(int &n, vector<int> &vt){
    int re=0;
    for(int i = 0 ; i < n ; i++){
        int mn = 10e6;
        for(int j = i ; j < n ; j++){
            mn = min(mn,vt[j]);
            re = max(re , mn * (j - i + 1));
        }
    }
    return re;
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    
    int n;
    cin >> n;
    vector<int> vt(n);
    for(int &i : vt) cin >> i;
    cout << sub1(n,vt);
    return 0;
}