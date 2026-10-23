#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "Pmove"
#define el "\n"
#define ll long long
using namespace std;
    int check(int n){
        int tm = 0;
        for(int i = 2 ; i*i<=n ; i++){
            while(n%i ==0){
                tm++;
                n/=i;
            }
        }
        if(n>1)tm++;
        return tm;
    }
    int cach(int l, int r){
        int g = __gcd(l,r);
        return check(l/g) +check(r/g);
    }

    int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);
    int n,mx = 0;
    ll r=1,l=-1;
    cin >> n;
    vector<int> vt(n);
    for(int i = 0 ; i < n ; i++){
        cin >> vt[i];
        mx=max(mx,vt[i]);
    }
    for(int i = 1 ; i < mx;i++){
        ll tm =0;
        for(int j = 0 ; j < n ; j++){
            tm+=cach(vt[j],i);
        }if(l==-1||tm<l){
            l = tm;
            r=i;
        }
    }
    cout << l << ' ' << r << el;

    return 0;
}