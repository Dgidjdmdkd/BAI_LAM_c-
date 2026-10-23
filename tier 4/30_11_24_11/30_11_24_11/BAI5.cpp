#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#define VO "BAI5"
#define el "\n"
#define ll long long
using namespace std;
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(VO".INP","r",stdin);
    freopen(VO".OUT","w",stdout);
	
	int n;
	cin >> n;
	vector<ll> vt(n + 1,0),pre(n+2,0);
	for(int i = 1 ; i <= n ; i++){
		cin >> vt[i];
		pre[i] = pre[i - 1] + vt[i];
	} 
	ll re=0;
	for(int i = 1 ; i <= n - 3; i++){
		for(int j = i + 1; j <= n - 2; j++){
			for(int k = j +1 ; k <= n - 1; k++){
				int su1 = pre[i],su2 = pre[j] - pre[i],su3 = pre[k] - pre[j],su4 = pre[n] - pre[k];
				if(su1 == su2 && su2 == su3 && su3 == su4 && su4 == su1) re++;
			}
		}
	}
	cout << re << el;
	return 0;
}
