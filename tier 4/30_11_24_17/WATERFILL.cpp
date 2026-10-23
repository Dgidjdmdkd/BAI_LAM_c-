#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "WATERFILL"
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
	int n,k,sum;
	cin >> n >> k;
	int t = n;
	while(t--){
		int x;
		cin >> x;
		sum += x;
	}
	if(sum % (n * k) == 0){
		cout << sum / (n * k) << el;
	}else{
		cout << sum / (n * k) + 1 << el;
	}
	return 0;
}