#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

int main(){
    cout.tie(nullptr);
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> vt1(n),dp;
    for(int &x : vt1) cin >>x;
    for(int x : vt1){
        auto it = lower_bound(dp.begin(),dp.end(),x);
        if(it == dp.end())
            dp.push_back(x);
            else *it = x;
    }
    cout << dp.size();
    return 0;
}