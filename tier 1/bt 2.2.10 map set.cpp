#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	int mang2c[n + 1][m + 1];
	for(int i = 1;i <= n;i++){
		for(int i = 1;i<= m;i++){
			cin>>mang2c[n][m];
		}
	}
	int q;cin>>q;
	while(q--){
		int tong = 0;
		int h1,h2,c1,c2;
	for(int i = h1;i <= h2;i++){
		for(int j = c1;j <= c2;j++){
			tong+=mang2c[i][j];
		}
	}
	cout<<tong<<endl;
	}
	return 0;
}