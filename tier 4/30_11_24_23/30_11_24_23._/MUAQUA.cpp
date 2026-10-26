#include <bits/stdc++.h>
#define ll long long
#define vo "MUAQUA"
#define el "\n"
#define fi first
#define se second
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
    sort(vt.begin(),vt.end());
    int re = 0, i = 0;
    while(i < n){
        int tmp = vt[i];
        i++;
        while(i < n && (vt[i] - tmp >= k)){
            tmp = vt[i];
            i++;
        }
        re += tmp;
    }
    cout << re;
    return 0;
}