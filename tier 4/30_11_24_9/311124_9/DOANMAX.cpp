#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "DOANMAX"
#define el "\n"
#define ll long long

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);
    int n;
    cin >> n;
    vector<int> vt(n);
    for(int &x : vt) cin >> x;
    int re = 1, l = 0 , r = 0 , tm = 1 ;
    for(int i = 1 ; i < n ; i ++){
        if(vt[i] >= vt[i - 1]) tm++;
        else {
            tm=1;
            l = i;
        }
        if(tm > re){
            re = tm;
            r = l;
        }
    }
    cout << re << el;
    for(int i = r ; i < r + re ; i++){
        cout << vt[i]<<' ';
    }
    return 0;
}