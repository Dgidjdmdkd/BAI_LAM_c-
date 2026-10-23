#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "BAI4"
using namespace std;

int main(){
    cout.tie(nullptr);
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    
    string a;
    cin >> a;
    string tm = a + a;
    int n = a.size(),res = 0;
    for(int i = 0 ; i < n ; i ++){
        bool check = true;
        for(int j = 0 ; j < n / 2 ; j ++){
            if(tm[j + i] != tm[i + n - 1 - j]){
                check = false;
                break;
            }
        }
        if(check)res ++;
    }
    cout << res;
    return 0;
}