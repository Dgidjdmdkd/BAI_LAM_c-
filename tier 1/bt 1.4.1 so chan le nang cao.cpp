#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int m,n,p,q,dem = 0;
	long long sum = 0;
	cin >> m >> n >> p >> q;
	for (int a = m ; a <= n ; a++){
		for (int b = p ; b <= q ; b++){
			if(b){
				sum+=(a*10+b);
				dem++;
			}
		}
	}
	cout<<dem<<"\n"<<sum;
	return 0;
}