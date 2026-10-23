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
    //freopen(BL".OUT", "w", stdout);

    string a,b;
    while(cin >> a >> b){
        set<char> s1,s2;
        for(char x : a) s1.insert(x);
        for(char x : b) s2.insert(x);
    if(a.size() != b.size()) cout << "NO" << el;
    if(a.size() == b.size()){
        bool ok=true;
        for(int i = 0 ; i < (int) s1.size(); i ++){
            if(s1[i] != s2[i]){
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << el;
    }
}
    return 0;
}