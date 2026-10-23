#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("BAI5.INP","r",stdin);
	freopen("BAI5.OUT","w",stdout);
	
	int n,q;
	cin >> n >> q;
	vector<ll> vt(n + 1, 0);
	for(int i = 1 ; i <= n ; i++){
		cin >> vt[i];
	}
	while(q--){
		int l,r,d,cnt = 0;
		cin >> l >> r >> d;
		for(int i = l ; i <= r ; i++){
			vt[i] += d;
		}
		for(int i = 1 ; i < n ; i++){
			if(vt[i] > vt[i+1]) cnt++;
		}
		cout << cnt << "\n";
	}
	return 0;
}