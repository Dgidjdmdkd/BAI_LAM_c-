#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "SORT"
#define el "\n"
#define ll long long
using namespace std;
bool check(int n) {
    if (n <= 1) return false;
    ll sum= 1;
    for (int i = 2;i * i <=n; i++) {
        if (n % i ==0) {
            sum += i;
            if (i *i!= n) sum+=n/ i;
        }
    }
    return sum == n;
}
    int main(){
    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);
    ll n;
    cin >> n;
    vector<int> vt;
    for(int i = 0 ; i < n ; i++){
        int x;cin>>x;
        if(check(x)) vt.push_back(x);
    }
    if(vt.empty()) cout<<0<<el;
    else{
        sort(vt.begin(),vt.end());
        for(int x : vt){
            cout << x << ' ';
        }   
        cout << el;
    }
    return 0;
}