#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("AVR.INP","r",stdin);
    freopen("AVR.OUT","w",stdout);
    int n;
    cin >> n;
    vector<int> vt1(n),vt2(n);
    long long pre = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> vt1[i];
    }
    for(int i = 0 ; i < n ; i++){
        vt2[i] = (i + 1) * vt1[i] - pre;
        pre += vt2[i];
    }
    for(int i = 0 ; i < n; i++){
        cout << vt2[i] << ' ';
    }
    cout << "\n";
    return 0;
}