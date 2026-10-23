#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("BAI1.INP","r",stdin);
	freopen("BAI1.OUT","w",stdout);
	
	int n,m,x,y,z,t,bd,kt,res = 0;
	cin >> n >> m;
	vector<float> st1(n + 1);
	for(int i = 1 ; i <= n ; i++){
		cin >> st1[i];
	}
	cin >> x >> y >> z >> t >> bd >> kt;
	double tmp = abs(st1[bd] - st1[kt]);
	
	if (tmp < m / 4.0) res = x;
	else if(tmp < m / 3.0) res = y;
	else if(tmp < m / 2.0) res = z;
	else res = t;
	
	cout << res;
	return 0;
}