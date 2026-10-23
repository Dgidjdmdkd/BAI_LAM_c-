#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int a,s = 0;cin>>a;
	while(a > 0){
		s += a % 10;
		a/=10;
	}
	cout<<s;
	return 0;
}