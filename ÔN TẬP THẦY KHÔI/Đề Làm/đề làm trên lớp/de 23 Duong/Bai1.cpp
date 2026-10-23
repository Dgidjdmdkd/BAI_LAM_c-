#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("Bai1.inp","r",stdin);
    freopen("Bai1.out","w",stdout);
    int k,n;
    string s1;
    cin >> s1 >> k >> n;
    vector<int> vt(n);
    for(int i = 0 ; i < n ; i ++){
        cin >> vt[i];
    }
    for(int i = 0 ; i < n ; i ++){
        cout<< s1.substr((vt[i]-1) * k,k) << "\n";
    }
    return 0;
}