#include <bits/stdc++.h>
#define ll long long
#define vo "MMSEG"
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
    int n;
    cin >> n;
    vector<int> vt(n);
    for(int &x : vt) cin >> x;
    int mn = *min_element(vt.begin(),vt.end());
    int mx = *max_element(vt.begin(),vt.end());
    int pmn=-1,pmx=-1,re=INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(vt[i] == mn) pmn = i;
        if(vt[i] == mx) pmx = i;
        if(pmn != -1 && pmx != -1 ) re = min(re,abs(pmn-pmx) + 1);
    }
    cout << re << el;
    return 0;
}