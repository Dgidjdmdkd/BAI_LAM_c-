#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    int n;
    double m;
    cin >> n >> m;
    int x,y,z,t;
    vector<float> dd(n + 1);
    for(int i = 0; i < n ; i++){
        cin>>dd[i];
    }
    cin>>x>>y>>z>>t;
    int bd,kt;
    cin >> bd >> kt;
    double p1,p2;
    
    if (bd == 0) p1 = 0;
    else if (bd == n + 1) p1 = m;
    else p1 = dd[bd];

    if (kt == 0) p2 = 0;
    else if (kt == n + 1) p2 = m;
    else p2 = dd[kt];

    double kc = abs(p2 - p1);
    long long res = 0;
    if (kc < m / 4.0) res = x;
    else if (kc < m / 3.0) res = y;
    else if (kc < m / 2.0) res = z;
    else res = t;
    cout << res;
    return 0;
}