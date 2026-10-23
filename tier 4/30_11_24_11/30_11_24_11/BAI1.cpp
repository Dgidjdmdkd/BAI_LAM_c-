#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "BAI1"
#define el "\n"
#define ll long long

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);

    double a,tong=0;
    cin >> a;
    if(a > 25){
        tong += (a-25) * 10300;
        a = 25;
    }if(a > 15){
        tong += (a-15) * 9200;
        a=15;
    }if(a >5){
        tong+=(a-5)*7800;
        a=5;
    }if(a>0){
        tong+=a*6500;
        a=0;
    } cout << fixed << setprecision(2);
    cout << tong << el << tong*0.12 << el << tong*(1+0.12)<<el;
    return 0;
}