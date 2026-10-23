#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "BAI1"
#define ll long long 
using namespace std;

bool check(ll &a){
    if(a < 2) return false;
    if(a == 2 || a == 3) return true;
    if(a % 2 == 0 || a % 3 == 0) return false;
    for(int i = 5 ; i * i < a ; i+= 6){
        if(a % i == 0) false;
    }
    return true;
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);

    string a;
    ll va,re = 0;
    int le = 0;
    cin >> a;
    a += 'E';
    for(char x : a){
    if(x >= '0' && x <= '9'){
            va=va*10+(x-'0');le++;
    }else{
        if(le > 0){
                bool ok;
        if(va == 0 && le == 1){
                ok = true;
        }else if(va > 0 && to_string(va).length() == le){
                ok = true;
            }
        if(ok&&va < 5e6&&check(va)){
           if(va > re) re = va;
                }
                    va = 0;
                    le = 0;
            }
        }
    }
    cout << re << "\n";
    return 0;
}