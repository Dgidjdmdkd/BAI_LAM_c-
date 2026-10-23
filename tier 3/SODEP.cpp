//#pragma GCC Optimize ("Ofast")
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen("SODEP.INP","r",stdin);
    freopen("SODEP.OUT","w",stdout);
    
    unsigned long long n;
    cin >> n;
    ll tmp = 0;
    while(n > 0){
        tmp += n%10;
        n/=10;
    }
    string str = to_string(tmp);
    cout << (str.back() == '9' ? '1' : '0');
    return 0;
}