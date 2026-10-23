#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "GN"
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
    int cnt=0;
    cin >> a >> b;
    for(int i = 0 ; i <= a.size() - b.size();i++){
        string c = a.substr(i,b.size());
        for(int j = 0 ; j < b.size();j++){
            if(b[j] == c[j]) cnt++;
        }
    }
    cout << cnt << el;
    return 0;
}