#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);
	
	freopen("BAI2.INP","r",stdin);
	freopen("BAI2.OUT","w",stdout);
	
	int n,cnt = 0,res = INT_MAX;
	cin >> n;
	vector<int> vt1(n);
	for(int i = 0 ; i < n ; i++) cin >> vt1[i];

	for(int i = 0 ; i < n ; i++){
		if(vt1[i] == 0){
		cnt++;	
		}else{
		if(cnt >= 2) res = min(cnt,res);
		cnt = 0;
		}	
	}
	if (cnt >= 2) res = min(cnt,res);
	cout << res;
	return 0;
}