#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n,k,res = 0;cin>>n>>k;
	while(n > 0){
		n -= k;
		k*=2;
		res++;
	}
	cout<<res<<"\n";
	return 0;
}