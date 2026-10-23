#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
//#pragma GCC optimize ("unroll-loop")
#define VO "FIND"
#define el "\n"
#define ll long long
using namespace std;

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	freopen(VO".INP","r",stdin);
	freopen(VO".OUT","w",stdout);

	ll n,re=0;
	cin >> n;
	vector<pair<ll,ll>> vt(n);
	for(ll i = 0 ; i < n ; i++){
		ll x,y;
		cin >> x >> y;
		if(x >y) swap(x,y);
		vt[i] = {x,y};
	}
	sort(vt.begin(),vt.end());
	ll xml=vt[0].first,xmr=vt[0].second;
	for(ll i = 1 ; i < n ; i++){
		if(vt[i].first >= xml && vt[i].first <= xmr){
			xmr = max(xmr,vt[i].second);
			re = max(re , abs(xmr - xml));
		}else{
			xml = vt[i].first;
			xmr = vt[i].second;
		}
	}
	cout << re << el;
	return 0;
}
