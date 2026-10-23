#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "HSG"
#define el "\n"
#define ll long long
using namespace std;
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);
    string a;
    ll n,h=0,re=0;
    cin >> n;cin.ignore();
    getline(cin,a);
    vector<int> g(n+1,0);
    for(ll i = n - 1;i>=0;i--)g[i]=g[i+1]+(a[i]=='G'?1:0);
    for(ll i = 0 ;i<n;i++){
        if(a[i]=='H')h++;
        else if(a[i]=='S')re+=h*g[i+1];
    }
    cout<<re<<el;
    return 0;
}