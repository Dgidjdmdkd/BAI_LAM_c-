#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "TONGCHAN"
using namespace std;

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    int n;
    cin >> n;
    vector<ll> vt(n); ll tm =0,re=0;
    for(int i = 0 ; i < n ; i++){
        cin >> vt[i];
        tm+=vt[i];
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1; j < n ; j++){
            ll ts = tm-vt[i]-vt[j];
            if(ts%2==0)re++;
        }
    }
    cout << re << el;
    return 0;
}