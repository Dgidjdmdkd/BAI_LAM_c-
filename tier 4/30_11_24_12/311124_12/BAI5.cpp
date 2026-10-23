#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
//#pragma GCC optimize ("unroll-loop")
#define VO "BAI5"
#define el "\n"
using namespace std;
int sol(vector<pair<int,int>> &vt,int x,int n) {
	//sort(vt.begin(),vt.end());
	int re = 0,ca0=0,ca1=0;
	for(int i = 0 ; i < n ; i++) {
		if(vt[i].first == 0) {
			int tmp = ca0;
			if(ca0 == x) {
				re++;
				ca0 =0;
			} else if(tmp + vt[i].second > x) {
				re++;
			}
				ca0+= vt[i].second;
		}
		if(vt[i].first == 1) {
			int tmp = ca1;
			if(ca1 == x) {
				re++;
				ca1 =0;
			} else if(tmp + vt[i].second > x) {
				re++;
			}
				ca1+= vt[i].second;
		}
	}
	if(ca0 > 0) re++;
	if(ca1 > 0) re++;
	return re;
}
int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	freopen(VO".INP","r",stdin);
	freopen(VO".OUT","w",stdout);

	int n,k,re=0;
	cin >> n >> k;
	vector<pair<int,int>> vt(n);
	for(int i = 0 ; i < n ; i++) cin >> vt[i].second;
	for(int i = 0 ; i < n ; i++) cin >> vt[i].first;
	re = sol(vt,k,n);
	cout << re << el;
	return 0;
}
