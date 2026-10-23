#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "KHOANGCACH"
#define el "\n"
#define ll long long

using namespace std;

int main() {
    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    long long dem = 0; 
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            for (int k = j + 1; k < N; ++k) {
                for (int t = k + 1; t < N; ++t) {
                    if (A[i] == A[k] && A[j] == A[t]) {
                        dem++;
                    }
                }
            }
        }
    }

    cout << dem << endl;
    return 0;
}