#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "HOANVI"
#define el "\n"
#define ll long long

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);

    string a;
    cin >> a;
    int mx=0,st=0;
    for(int i = 0 ; i < (int)a.size();i++){
        vector<int>num(27,0);
        int ct = 0,cr = 150;
        for(int j = i ; j < (int)a.size();j++){
            int idx = a[j] - 'A';
            if(num[idx] > 0) break;
            num[idx]++;
            ct=max(ct,(int)a[j]);
            cr=min(cr,(int)a[j]);
            int k=j-i+1;
            if(ct-cr+1 ==k){
                if(k>mx){
                    mx=k;
                    st=i;
                }
            }
        }
    }
    cout << a.substr(st,mx)<<el;

    return 0;
}