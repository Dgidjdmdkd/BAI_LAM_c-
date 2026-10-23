#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "BAI1"
using namespace std;

int main(){
    cout.tie(nullptr);
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    
    string a;
    cin >> a;
    sort(a.begin(),a.end(),greater());
    cout << a;
    return 0;
}