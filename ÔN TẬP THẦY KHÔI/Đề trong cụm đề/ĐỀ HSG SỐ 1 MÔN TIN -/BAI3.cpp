
#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("BAI3.INP","r",stdin);
    freopen("BAI3.OUT","w",stdout);

    int n,m;
    cin >> n >> m;
    vector<int> v1(n + 1), v(n+1) ,b(n+1), d(n+1);
    for(int i = 1 ; i <= n ; i++){
    cin >> v1[i];
    v[i] = v[i - 1] + (v1[i] == 1);
    b[i] = b[i - 1] + (v1[i] == 2);
    d[i] = d[i - 1] + (v1[i] == 3);
    }
    int tc = m;
    while(tc--){
        int l,r;
        cin >> l >> r;
        int g = v[r] - v[l - 1];
        int s = b[r] - b[l - 1];
        int c = d[r] - d[l - 1];
        cout << g << ' ' << s << ' ' << c << "\n";
    }
    return 0;
}