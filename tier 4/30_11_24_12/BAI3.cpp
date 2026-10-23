#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
//#pragma GCC optimize ("unroll-loop")
#define VO "BAI3"
#define el "\n"
using namespace std;
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(VO".INP","r",stdin);
    freopen(VO".OUT","w",stdout);

    string a,b = "",c;
    cin >> a;
    for(int i = 0 ; i < (a.size() + 1) /2 ; i ++){
        b+=a[i];
        while(c.size() < a.size()){
            c+=b;
        }
        if(c == a){
            cout << b << el;
            return 0;
        }
        c = "";
    }
    if(c != a){
        cout << a << el;
    }

	return 0;
}
