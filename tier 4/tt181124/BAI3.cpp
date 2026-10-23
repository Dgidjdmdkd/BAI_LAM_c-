#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "BAI3"
#define ll long long 
using namespace std;


int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);

    int n ;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    ll mxs= 0;

for (int l = 0; l < n; ++l) {
    ll sum = 0;
    for (int r = l; r < n; ++r) {
        sum += a[r];
        if (a[l] == a[r]) {
            mxs = max(mxs, sum);
        }
    }
}
    cout << mxs;

    return 0;
}