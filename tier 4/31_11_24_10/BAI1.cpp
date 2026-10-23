#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "BAI1"
#define el "\n"

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);

    string a;
    cin >> a;
    size_t re=0,mu=1;
    for(int i = a.size() -1; i >= 0 ; i--){
        if(a[i] == '1'){
            re += mu;
        }
        mu*=2;
    }
    cout << re << el;
    return 0;
}