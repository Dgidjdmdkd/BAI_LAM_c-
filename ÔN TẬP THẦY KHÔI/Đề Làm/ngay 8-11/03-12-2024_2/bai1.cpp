#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("bai1.inp","r",stdin);
    //freopen("bai1.out","w",stdout);
    int n,m,res = 0,x, y, z, k,bd,kt;
    cin >> n >> m;
    vector<float> s(n + 1);
    for(int i = 1 ; i <= n ; i++){
        cin >> s[i];
    }
    cin >> x >> y >> z >> k;
    cin >> bd >> kt;
    double temp = 0;
    if(bd == 0){
        temp = s[kt];
    }else if(kt == bd + 1){
        temp = m - s[bd];
    }else{
        temp = abs(s[bd] - s[kt]);
    }
    if(temp < m / 4) res = x;
    else if(temp < m / 3) res = y;
    else if(temp < m / 2) res = z;
    else res = k;
    cout << res;
    return 0;
}