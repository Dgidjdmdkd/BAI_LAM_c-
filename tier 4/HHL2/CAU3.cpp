#include <iostream>
#include <vector>
#define bl "CAU4"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    int n;
    if (!(cin >> n)) return 0;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int max_len = 0;
    int best_L = -1, best_H = -1;

    // Duyệt mọi cặp (L, H) - O(N^2)
    for (int L = 1; L <= n; ++L) {
        long long sum = 0;
        for (int H = L; H <= n; ++H) {
            sum += a[H]; // Cộng dồn tổng đoạn a[L..H]
            if (sum > 0) {
                int current_len = H - L + 1;
                if (current_len > max_len) {
                    max_len = current_len;
                    best_L = L;
                    best_H = H;
                }
            }
        }
    }

    cout << best_L << " " << best_H << "\n";
    return 0;
}