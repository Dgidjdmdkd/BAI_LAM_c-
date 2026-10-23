#include <bits/stdc++.h>
using namespace std;

bool tt(int m, int n) {
    for (int i = 1; i < m; i++) if (m % i == 0 && n % i != 0) return false;
    for (int i = 1; i < n; i++) if (n % i == 0 && m % i != 0) return false;
    return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("BAI2.INP","r",stdin);
	freopen("BAI2.OUT","w",stdout);
	int n,m;
	cin >> n >> m;
	cout << (tt(m,n) ? 1 : 0);

	return 0;
}