#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	freopen("STRING.INP", "r", stdin);
    freopen("STRING.OUT", "w", stdout);
    string s1, s2;
    cin >> s1 >> s2;

    int diff_count = 0;
    for (size_t i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            diff_count++;
        }
    }

    cout << diff_count << endl;
    return 0;
}
