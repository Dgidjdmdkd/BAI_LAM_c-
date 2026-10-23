#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "QUANDAO"
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
    int ma[n + 2][n + 2];
    for(int i = 1 ; i <= n ;i++){
        for(int j = 1 ; j <= n ; j++){
            cin>>ma[i][j];
        }
    }

    return 0;
}