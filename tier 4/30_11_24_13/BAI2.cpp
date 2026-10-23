#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "tên bài"
#define el "\n"
#define ll long long

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    //freopen(BL".INP", "r", stdin);
    //freopen(BL".OUT", "w", stdout);

    int n;
    cin >> n;
    vector<int> vt(n),tmp(n + 1,-1);
    for(int &x : vt) cin >> x;
    tmp = vt;
    for(int &x : tmp){
        if(x%2==0) x = 0;
        else x = 1;
    }
    int cu=1,ma = 1;
    for(int i = 1 ; i < n ; i++){
        if(tmp[i] == tmp[i - 1]){
            cu++;
        }else{
            cu=1;
        }
        ma=max(ma,cu);
    }
    cout << ma << el;
    return 0;
}