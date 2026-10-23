#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h> 
#define ll long long 
#define el "\n"
#define bl "CBAI1"

using namespace std; 
    
ll vt[1005][1005],pre[1005][1005];

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    int m,n,q;
    cin >> m >> n >> q;
    for(int i = 1 ; i <= m ; i ++){
        for(int j = 1 ; j <= n ; j ++){
            cin >> vt[i][j];
            pre[i][j] = vt[i][j] + pre[i - 1][j] + pre[i][j-1] - pre[i - 1][j - 1];
        }
    }
    // sub 2
    while(q--){
    int r1,c1,r2,c2;
        cin >> r1 >> c1 >> r2 >> c2;
        cout << pre[r2][c2] - pre[r2][c1 - 1] - pre[r1 - 1][c2] + pre[r1 - 1][c1 - 1] << el;    
    }
    //sub 1
    /*
    if(m < 100 && n < 100 && q < 100){
        while(q--){
        int r1,c1,r2,c2;
            cin >> r1 >> c1 >> r2 >> c2;
            int sum = 0;
            for(int i = c1 ; i <= c2 ; i++){
                for(int j = r1 ; j <= r2 ; j++){
                    sum += vt[i][j];
                }
            }
            cout << sum << el;
        }
    */
    return 0;
}