#include <bits/stdc++.h>
#define ll long long
#define vo "COVID"
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
    int n,re = 0;
    cin >> n;
    vector<int> vt(5,0);
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        vt[x]++;
    }
    re += vt[4];
    re += vt[2] / 2;
    vt[2] %= 2;
    if(vt[3] <= vt[1]){
        re += vt[3];
        vt[1] -= vt[3];
    }else{
        re += vt[3];
        vt[1] = 0;
    }
    if(vt[2] != 0){
        vt[1]+=2;
    }
    re += (vt[1] + 3) / 4;
    cout << re << el;

    return 0;
}