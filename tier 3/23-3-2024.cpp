#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1e6 + 5;
vector<bool> sanges(MAX_N,true);
void sang(){
    int n = MAX_N;
    sanges[1] = sanges[0] = false;
    for(int i = 2 ; i * i < n ; i++){
        if(sanges[i]){
            for(int j = i * i ; j < n ; j += i){
                sanges[j] = false;
            }
        }
    }
}
void bai1(){
    sang();
    int g,q;
    cin >> g;
    vector<int> vt1(g + 1),pre(g + 1);
    for(int i = 1 ; i <= g ; i++){
        cin >> vt1[i];
        pre[i] = pre[i - 1] + vt1[i];
    }
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << "\n";
    }
    for(int x : vt1) if(sanges[x]) cout << x << ' ';
}
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("23-3.INP","r",stdin);
    bai1();
    
    return 0;
}