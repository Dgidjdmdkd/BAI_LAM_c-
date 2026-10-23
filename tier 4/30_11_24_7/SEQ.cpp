#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "SEQ"
#define el "\n"
#define ll long long

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);

    int n,l,r,re=0;
    cin >> n >> l >> r;
    vector<int> vt(n + 1),pre(n+2,0);
    for(int i = 1 ; i <= n ; i++){
        cin >> vt[i];
        int tmp = abs(vt[i]);
        if(tmp >= l && tmp <= r) re++;
        pre[i] = pre[i - 1] + vt[i];
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = i + 1; j <= n ; j++){
            int tmp = abs(pre[j] - pre[i - 1]);
            if(tmp >= l && tmp <= r) re++;
        }
    }
    cout << re;
    return 0;
}