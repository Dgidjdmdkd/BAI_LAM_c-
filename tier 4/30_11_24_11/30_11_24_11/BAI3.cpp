#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "BAI3"
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
    while(cin >> a >> b){
    set<char> s1(a.begin(),a.end());
    set<char> s2(b.begin(),b.end());
    cout << (s1 == s2 ? "YES" : "NO");
}

    return 0;
}