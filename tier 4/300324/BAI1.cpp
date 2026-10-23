#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "BAI1"
#define el "\n"
#define ll long long
using namespace std;
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);
    
    string a,b;
    int k=0;
    getline(cin,a);
    stringstream ss(a);
    while(ss>>b){
        k++;
    }
    cout << k<<el;

    return 0;
}