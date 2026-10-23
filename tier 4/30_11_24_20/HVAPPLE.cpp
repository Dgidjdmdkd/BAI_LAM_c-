#include <bits/stdc++.h>
#define ll long long
#define vo "HVAPPLE"
#define el "\n"
using namespace std;
void bl (){
    freopen(vo".INP","r",stdin);
    freopen(vo".OUT","w",stdout);
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    bl();
    int n,k;
    cin >> n >> k;
    vector<int> vt(n);
    for(int &x : vt) cin >> x;
    int tong=0,c=0;
    for(int i = 0 ; i < n ; i++){
        int lcu = min(c,k), cla = k - lcu;

    }

    return 0;
}