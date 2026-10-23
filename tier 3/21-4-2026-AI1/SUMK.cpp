#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "SUMK"
#define el "\n"

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);

    int n,k;
    cin >> n >> k;
    vector<int> vt(n);
    for(int i = 0 ; i < n ; i++){
        cin >> vt[i];
    }
    sort(vt.begin(),vt.end());
    int i = 0,j = vt.size() - 1,cn = 0;
    while(i < j){
        int tmp = vt[i] + vt[j];
        if(tmp == k){
            cout << i << ' ' << j;
            cn++;
            i++;
            j--;
        }
        if(tmp > k) j--;
        else i++;
    }
    if(cn == 0) cout << -1;
    return 0;
}