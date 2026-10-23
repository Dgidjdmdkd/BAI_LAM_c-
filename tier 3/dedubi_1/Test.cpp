#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
int Maxn = 1e5 * 2 + 1;
vector<bool> sieve(Maxn,true);
void sang(){
    sieve[0] = sieve[1] = false;
    for(int i = 2 ; i * i < Maxn ; i++)
        if(sieve[i])
            for(int j = i * i ; j < Maxn ; j+= i)
                sieve[j] = false;
}
int main(){
    cout.tie(nullptr);
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    sang();
    int l, r, start, end;
    cin >> l >> r;
    start = max(0,l);
    end = min(r,Maxn);
    for(int i = start; i <= end ; i++){
        if(sieve[i]) cout << i <<"\n";
    }

    return 0;
}