#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "bai4"
using namespace std;
int k;
string a, b;
void sol() {
    int lea = a.length(),leb = b.length(),ans = 0;

    for (int i =0;i <= leb-lea; i++) {
        int ts =0;
        for (int j = 0; j <lea; j++) {
            if (b[i +j]!= a[j]) {
                ts++;
                if(ts> k) break;
        }
        }
        if(ts <= k) ans++;
    }
    cout<< ans <<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(bl".INP", "r", stdin);
    freopen(bl".OUT", "w", stdout);

    cin >> k>> a >>b;
    sol();
    return 0;
}