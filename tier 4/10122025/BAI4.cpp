#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "BAI4"
#define ll size_t
#define el "\n"
using namespace std;
vector<int> vt(0,1);
void taomang(ll n){
    ll chan=2,le=1,cnt=0,ce=1,dai=1;
    while(cnt<n){
        if(ce % 2 ==1){
            for(ll i = 0 ; i < dai && cnt < n ;i++,cnt++){
                vt.push_back(le);
                le+= 2;
            }
        }else{
            for(ll j = 0 ; j < dai && cnt < n ; j++,cnt++){
                vt.push_back(chan);
                chan+=2;
            }
        }
        dai *= 2;
        ce++;
    }
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    ll l ,r,re=0;
    cin >> l >> r;
    taomang(r);
    for(int i = l-1 ; i < r ; i++){
        re+=vt[i];
    }
    cout << re;

    return 0;
}
//nháp
// gd 1 	1
// gd 2 	2 4
// gd 3 	3 5 7 9
// gd 4	    6 8 10 12 14 16 18
// gd 5	    lẻ / 8*2 = 16
// gd 6	    chẵn / 16*2 = 32
// gd 7 	lẻ / 32*2 = 64
// gd 8	    chẵn / 64*2 = 128
// csn = u1*q^n-1
// 1 4 16 64 (lẻ)
// 2 8 32 128 (chẵn)