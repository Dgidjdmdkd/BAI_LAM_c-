#pragma gcc optimize("ofast")
#define el "\n"
#define bl "BAI1"
#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int n = max(a.size(),b.size()), sla = 0,slb = 0;
    for(int i = 0 ; i < n ; i++){
        if(i < a.size() && isdigit(a[i]))sla++;
        if(i < b.size() && isdigit(b[i]))slb++;
    }
    
    cout << (sla == slb ? "CO" : "KHONG") << el;
    cout << sla << ' ' << slb << el;
    return 0;
}