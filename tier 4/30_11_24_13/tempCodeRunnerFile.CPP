#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "tên bài"
#define el "\n"
#define ll long long

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    //freopen(BL".INP", "r", stdin);
    //freopen(BL".OUT", "w", stdout);

    int n,q;
    cin >> n >> q;
    vector<int> vt(n + 1),pre(n + 1,0);
    for(int i = 1 ; i <= n ; i++){
        cin >> vt[i];
        pre[i] = pre[i - 1] + vt[i];
    }
    while(q--){
        int k;
        cin >> k;
        if(k > *max_element(vt.begin(),vt.end())){
                cout << pre[n] << el;
            };
        for(int i = 1 ; i <= n ; i++){
            if(k < vt[i]){
                cout << pre[i] << el;
                break;
            }
        }
    }

    return 0;
}