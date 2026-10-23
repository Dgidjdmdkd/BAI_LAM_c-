#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "BAI2"
#define el "\n"
#define ll long long

using namespace std;

    int mxn = 1000000+6;
    vector<bool> sie(mxn,true);

    void sang(){
        sie[1] = sie[0] = false;
        for(int i = 2 ; i * i < mxn; i++){
        if(sie[i]){
            for(int j = i * i ; j < mxn ; j+=i){
                sie[j] = false;
            }
        }   
    }
}
int cong(int n){
    int r=0;
    while(n>0){
        r += n%10;
        n/=10;
    }
    return r;
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);

    int m,n,k,re=0;
    cin >> m >> n >> k;
    sang();
    int t=min(m,n),p=max(m,n);
    for(int i = t+1 ; i < p ; i++)
        if(sie[i]&&cong(i)%k==0) re++;
    cout << re << el;
    return 0;
}