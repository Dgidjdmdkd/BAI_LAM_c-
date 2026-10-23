#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool snt(ll a){
    if(a < 2) return false;
    if(a == 2 || a == 3) return true;
    if(a % 2 == 0 || a % 3 == 0) return false;
    for(int i = 5 ; i * i <= a ; i += 6){
        if(a % i == 0 || a % (i + 2) == 0) return false;
    }
    return true;
}
int dem(int a){
    if(a < 10) return 1;
    else return 1 + dem(a / 10);
}
ll dao(int a){
    ll c = 0;
    while(a > 0){
        c = c * 10 + a % 10;
        a /= 10;
    }
    return c;
}
ll guong (int x){
    if(x < 10) return x;

    int d = dem(x);
    int t = x / 10;
    ll td = dao(t);
    ll them = 1;
    for(int i = 1; i < d ; i++) them *=10;
    ll res = x * them + td;
    return res;
}
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("Bai3.inp","r",stdin);
    freopen("Bai3.out","w",stdout);
    
    int a;
    cin >> a;
    vector<int> vt(a);
    for(int i = 0 ; i < a; i ++){
        cin >> vt[i];
        ll ds = guong(vt[i]);
        if(snt(ds)) cout << ds << ' ';
    }
    cout << "\n";
    return 0;
}