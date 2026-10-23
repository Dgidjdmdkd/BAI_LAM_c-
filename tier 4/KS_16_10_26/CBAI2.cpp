#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h> 
#define ll long long 
#define el "\n"
#define bl "CBAI2"

using namespace std;
bool check(ll r, const vector<ll>& x, int k) {
    int n = x.size(),cnt = 0,i = 0;
    while (i < n) {
        cnt++;
        ll mxc =x[i] + 2* r;
        while (i< n && x[i] <=mxc) {
            i++;
        }
    }
    return cnt <= k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<long long> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    sort(x.begin(),x.end());
    ll mxv= x[n - 1];
    for(ll i = 0; i <= mxv; i++) {
        if (check(i,x, k)) {
            cout << i <<el;
            break;
        }
    }
    return 0;
}