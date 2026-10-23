#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "SO"
#define el "\n"
#define ll long long

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);

    string a,b;
    cin >> a >> b;
    if(a.size() < b.size()){
        cout << -1;
    }else if(a.size() > b.size()){
        cout << 1;
    }else{
        if(a < b) cout << -1;
        else if(a > b) cout << 1;
        else cout << 0;
    }
    return 0;
}