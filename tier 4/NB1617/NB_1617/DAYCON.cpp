#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "DAYCON"
#define el "\n"
#define ll long long
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);
    
    int n,m,l = 0,r = 0;
    ll sum = 0;
    cin >> n >> m;
    vector<int> vt(n);
    for(int &x : vt) cin >> x;
    while (r < n){
        sum += vt[r];
        r++;
        while(l < r && sum > m){
            sum-=vt[l];
            l++;
        }
        if(sum == m){
            for(int i = l ; i < r ; i++) cout << vt[i] << ' ';
            cout << el;
            sum -= vt[l];
            l++;
        }
    }
    return 0;
}