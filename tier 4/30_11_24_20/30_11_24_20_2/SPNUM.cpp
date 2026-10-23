#include <bits/stdc++.h>
#define ll long long
#define vo "SPNUM"
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
    ll k;
    cin >> k;
    ll n = (ll)sqrt(k);
    vector<bool> sang(n + 1,1);
    sang[1] = sang[0] = false;
    for(ll i = 2 ; i * i <= n ; i++){
        if(sang[i]){
            for(ll j = i * i ; j <= n ; j+= i){
                sang[j] = false;
            }
        }
    }
    ll cnt=0;
    for(ll i = 2; i <= n ;i++)
        if(sang[i])
            cnt++;
    
    cout << cnt;
    return 0;
}