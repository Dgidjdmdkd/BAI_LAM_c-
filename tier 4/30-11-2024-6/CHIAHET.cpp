#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "CHIAHET"
using namespace std;

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    int a,b,x,y,re=0;
    cin >> a >> b >> x >> y;
    for(int i = a ; i <= b ; i++){
        if(i%x==0 || i % y==0) re++;
    }
    cout << re;
    return 0;
}