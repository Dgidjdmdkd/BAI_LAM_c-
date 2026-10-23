#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "BANGNHAC"
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
    vector<pair<int,int>> vt(n + 1);
    vector<int> pre(n+2,0);
    for(int i = 1 ; i <= n ; i++){
        vt[i].second = i;
        cin >> vt[i].first;
    }
    ll sum=0;
    sort(vt.begin()+1,vt.end());
    for(int i = 1 ; i <= n ; i++){
        pre[i] = pre[i - 1] + vt[i].first;
        sum += pre[i];
    }
    cout << sum << el;
    for(int i = 1 ; i <= n ; i++) cout << vt[i].second << ' ';
    return 0;
}