#include <bits/stdc++.h>
#define ll long long
#define llmn LLONG_MIN
#define llmx LLONG_MAX
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("BAI4.INP","r",stdin);
	freopen("BAI4.OUT","w",stdout);
	int n;
	cin >> n;
	
	vector<ll> vt(n);
	for(int i = 0 ; i < n ; i++){
		cin >> vt[i];
	}
	ll mx1 = llmn , mx2 = llmn , mn1 = llmx , mn2 = llmx;
	
	for(int x : vt){
		if(x > mx1){
			mx2 = mx1;
			mx1 = x;
		}else if(x > mx2){
			mx2 = x;
		}
		if(x < mn1){
			mn2 = mn1;
			mn1 = x;
		}else if(x < mn2){
			mn2 = x;
		}
	}
	ll res = max(abs(mx1+mx2),abs(mn1+mn2));
	
	cout << res;
	return 0;
}