#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define ll long long
#define bl "BAI5"
#define el "\n"
using namespace std;
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    int n,p,re=0;
    cin >> n >> p;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a[j] - a[i] >= p) {
                re = max(re, j - i);
            }
        }
    }
    cout << re;
    return 0;
}