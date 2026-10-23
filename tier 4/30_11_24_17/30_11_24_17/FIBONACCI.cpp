#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "FIBONACCI"
using namespace std;

void vo(){
	freopen(bl".INP","r",stdin);
	freopen(bl".OUT","w",stdout);
}

int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	vo();
	int n,mod = 1e9 + 7;
	cin >> n;
	vector<int> fibo(n + 2,1);
	for(int i = 2 ; i <= n ; i++){
		fibo[i] = (fibo[i - 1] + fibo[i - 2])%mod;	
	}
	cout << fibo[n - 1];
	return 0;
}