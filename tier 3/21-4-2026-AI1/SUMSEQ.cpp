#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "SUMSEQ"
#define el "\n"

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);

    int n,q ;
    cin >> n >> q;
    vector<int> vt(n + 1),pre(n + 1,0);
    for(int i = 1 ; i <= n ; i ++){
        cin >> vt[i];
        pre[i] = pre[i - 1] + vt[i];
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << el;
    }
    return 0;
}