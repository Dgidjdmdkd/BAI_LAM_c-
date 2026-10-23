#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main (){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    ll n,b,h;
    string bin = "",hex = "";
    cin >> n;
    b = n; h = n;
    if (n == 0) bin = '0'; 
    while(b > 0){
        bin = char((b%2) + '0') + bin;
        b/=2;
    }
    if(n==0) hex = '0';
    while(h > 0){
        int du = h % 16;
        char tmp;
        if(du < 10) tmp = du + '0';   
        else tmp = 'A' + (du - 10);
             hex = tmp + hex;
        h/=16;
    }
    cout << bin << "\n" << hex;
    return 0;
}