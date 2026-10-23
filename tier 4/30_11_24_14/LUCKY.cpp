#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "LUCKY"
#define el "\n"
#define ll long long

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);

    int n,k;
    cin >> n;
    map<int,int> mp;
    while(n--){
        int x; cin >> x;
        mp[x]++;
    }
    cin >> k;
    while(k--){
        int x;
        cin >> x;
        cout << mp[x] << el;
    }
    return 0;
}