#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd (int a, int b){
    return b == 0 ? a : gcd(b , a % b);
}
int lcm(int a, int b){
    return a * b/ gcd(a,b);
}
int ucln(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
void bl1 (){
    int tc;
    cin >> tc;
    while(tc--){
        int h, w;
        cin>> h >> w;
        ll res = 0;
        ll g = lcm(h,w);
        res = (h / g) * (w / g);
        cout <<res << "\n";
    }
}
void bl2(){
    ll x = 0,y = 0;
    cin >> x >> y;
    for(int i = 1 ;i <= lcm(x,y); ++i){
        if(x % i == 0 && y % i == 0){
        cout << i << " " << x / i << " " << y / i << "\n";
        }
    }
}
void bl3(){
    int n,m; cin >> n;
    vector<int> vt(n);
    for(int x = 0; x < n ; ++x){
        cin >> vt[x];
    }
    cin >> m;
    vector<int> vt2(m);
    for(int x = 0; x < m ; ++x){
        cin >> vt2[x];
    }
    ll max = 0;
    for(int i = 0 ; i < n; ++i){
        for(int j = 0 ; j < m ; ++j){
            ll tmp = gcd(vt[i],vt2[j]);
            if(tmp > max){
                max = tmp;
            }
        }
    }
    cout << max;
}
void bl4(){
    int n;
    cin >> n;
    vector<ll> vst1(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> vst1[i];
    }
    ll res = vst1[0];
    for(int i = 2; i < n ; ++i){
        res = gcd(res, vst1[i]);
    }
    cout << res;
}
void bl5(){
    int a;
    cin>>a;
    vector<int> vst2(a);
    for(int i = 0; i < a; ++i){
        cin >> vst2[i];
    }  
    ll tmps = vst2[0];
    for(int i = 1; i < a; ++i){
        tmps = lcm(tmps, vst2[i]);
    } 
    for(int i = 0 ; i < a ; ++i){
        cout<< tmps / vst2[i] << ' ' ;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bl5();
    return 0;
}