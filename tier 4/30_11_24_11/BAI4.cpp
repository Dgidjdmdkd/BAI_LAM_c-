#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
//#pragma GCC optimize ("unroll-loop")
#define VO "BAI4"
#define el "\n"
using namespace std;
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(VO".INP","r",stdin);
    freopen(VO".OUT","w",stdout);

	int n,k,re=0;
	cin >> n >> k;
	vector<int> vt(n + 1),pre(n+2,0);
	for(int i = 1 ; i <= n ; i++){
		cin >> vt[i];
		pre[i] = pre[i - 1] + vt[i];
	}
	for(int i = 1 ; i <= n ; i++){
		for(int j = i ; j <= n ; j++){
			if((pre[j] - pre[i - 1]) % k == 0){
				re = max(re,j - i+1);
			}
		}
	}
	cout << re;
	
}
