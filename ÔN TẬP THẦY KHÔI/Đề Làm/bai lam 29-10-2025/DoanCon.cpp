#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("DoanCon.INP", "r",stdin);
    freopen("DoanCon.OUT", "w",stdout);
    int t,n;
    cin >> n >> t;
    vector<int> vt1(n);
    vector<int> vk(t);
    for(int i = 0 ; i < n ; i++){
        cin >> vt1[i];
    }
    for(int i = 0 ; i < t ; i++){
        cin >> vk[i];
    }
    for(int i = 0; i < t; i++){
        int res = 0;
        for(int j = 0; j < n; j++){
            if(vt1[j] < vk[i]) res ++;
        }
        cout << res << "\n";
    }

    return 0;
}