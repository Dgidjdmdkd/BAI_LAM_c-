#include <bits/stdc++.h>
#define ll long long
#define vo "SODU"
#define el "\n"
using namespace std;
void bl (){
    freopen(vo".INP","r",stdin);
    freopen(vo".OUT","w",stdout);
}
int sub1(vector<int> vt){
    int re = 0, n = vt.size();
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j ++){
            re = max((vt[i] % vt[j]),re);
        }
    }
    return re;
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    bl();
    int n,re = 0;
    cin >> n;
    vector<int> vt(n);
    for(int &x : vt) cin >> x;
    sort(vt.begin(),vt.end());
    // sub 1;
    cout << sub1(vt);
    return 0;
}