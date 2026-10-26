#include <bits/stdc++.h>
#define ll long long
#define vo "SONGUON"
#define el "\n"
#define fi first
#define se second
using namespace std;
void bl (){
    freopen(vo".INP","r",stdin);
    freopen(vo".OUT","w",stdout);
}

int tong(int n){
    int re = 0;
    while(n > 0){
        re += n % 10;
        n /= 10;
    }
    return re;
}
int count(int n){
    int cnt = 0;
    while(n > 0){
        n /= 10;
        cnt ++;
    }
    return cnt;
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    bl();
    int n;
    cin >> n;
    bool ok = true;
    int tm = max(1,n - 9 * count(n));
    for(int i = tm ; i <= n ; i++){
        if((i + tong(i)) == n){
            cout << i << el;
            ok = false;
            break;
        }
    }
    if(ok) cout << 0 << el;
    return 0;
}