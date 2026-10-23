#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "WORK"
#define el "\n"
#define ll long long

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    //freopen(BL".INP", "r", stdin);
    //freopen(BL".OUT", "w", stdout);

    int n,sum = 0,x=0;
    cin >> n;
    
    vector<int> vt(n + 1),cv(n + 1),tm(n+1,0);
    for(int i = 0 ; i < n ; i++) cin >> vt[i];
    for(int i = 0 ; i < n - 1; i++) cin >> cv[i];
    
    tm[1] = vt[1];
    if(n>=2) tm[2]=min(vt[1]+vt[2],cv[1]);
    for(int i = 3 ; i <= n ; i++){
    tm[i] = min(tm[i -1]+vt[i],tm[i-2]+cv[i-1]);
    }
    cout << tm[n];
    return 0;
}