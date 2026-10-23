#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "bai1"
using namespace std;

int main(){
    cout.tie(nullptr);
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".inp","r",stdin);
    freopen(bl".out","w",stdout);
    
    int n,x,y,z,c,bd,kt,res = 0;
    double m;
    if(!(cin >> n >> m)) return 0;
    vector<double> vt(n + 2);
    vt[1]=0.0;vt[n + 1] = m;
    for(int i = 1 ; i <= n ; i++){
        cin >> vt[i];
    }
    cin >> x >> y >> z >> c >> bd >> kt;
    double dis = abs(vt[bd] - vt[kt]);
    if(dis < m / 4.0)res = x;
    else if(dis < m / 3.0) res = z;
    else if(dis < m / 2.0) res = y;
    else res = c;
    
    cout << res;

    return 0;
}