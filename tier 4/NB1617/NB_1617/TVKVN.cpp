#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "TVKVN"
#define el "\n"
#define co const
using namespace std;
bool ssa (co pair<int,int>& a,co pair<int,int>& b){
    return a.second > b.second;
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);
    int n;
    cin >> n;
    vector<pair<int,int>> vt(1000);
    for(int i = 0 ; i < 1000; i++) {
        vt[i].first = i;
        vt[i].second = 0;
    }
    for(int i = 0 ; i < n ; i++){
        int x; cin>>x;
        vt[x].second++;
    }
    sort(vt.begin(),vt.end(),ssa);
    int mx = vt[0].second;
    for(int i = 0 ; i < n ; i++){
        if(vt[i].second == mx) cout << vt[i].first << el;
    }

    return 0;
}