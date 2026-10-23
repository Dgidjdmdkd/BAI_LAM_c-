#include <bits/stdc++.h>
using namespace std;

void tgvd(int a, int b[], int& sum, int& cnt) {
    for (int i = 0; i < a; i++) {
        sum += b[i];
        cnt++;
    }
}

void demlc(int a, int b[], int& ch, int& l) {
    for (int i = 0; i < a; i++) {
        if (b[i] % 2 == 0) {
            ch++;
        } else {
            l++;
        }
    }
}

void prefixsum(int b[], int a, int res[]) {
    if (a == 0) return;
    res[0] = b[0];
    for (int i = 1; i < a; i++) {  // Start from 1
        res[i] = res[i - 1] + b[i];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, sum = 0, cnt = 0, chan = 0, le = 0;
    cin >> a;
    int m1[a];
    for (int i = 0; i < a; i++) {
        cin >> m1[i];
    }

    tgvd(a, m1, sum, cnt);
    demlc(a, m1, chan, le);

    int res[a];
    prefixsum(m1, a, res);

    cout << "Sum: " << sum << "\nCount: " << cnt << "\n";
    cout << "Even count: " << chan << "\nOdd count: " << le << "\n";

    cout << "Prefix sum array: ";
    for (int i = 0; i < a; i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
