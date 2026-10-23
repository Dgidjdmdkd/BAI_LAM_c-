#include <bits/stdc++.h>
using namespace std;

void tsnt(int a){
    for(int i = 2 ; i < sqrt(a) ; i++){
        while(a % i == 0){
            cout << i;
            a /= i;
            if(a != 1) cout <<'x';
        }
    }
    if(a != 1) cout << a;
}
void tsnt2(int a){
    int tmp = a;
    int cnt = 0;
    cout << a <<" = ";
    for(int i = 2 ; i < sqrt(a); i++){
        while(a % i == 0){
            cnt++;
            a /= i;
        }
        cout << i << "^" << cnt << " * ";
        cnt = 0;
    }
    if(a != 1) cout << a << "^" << cnt + 1;
}
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("On_luyen1.INP","r",stdin);

    int a;
    cin >> a;
    tsnt2(a);
    return 0;
}