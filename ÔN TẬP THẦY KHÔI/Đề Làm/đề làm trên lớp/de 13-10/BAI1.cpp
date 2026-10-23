#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    string a;
    cin >> a;
    sort(a.begin(),a.end(),greater());
    cout << a;
    return 0;
}