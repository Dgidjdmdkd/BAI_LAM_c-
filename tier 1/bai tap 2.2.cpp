#include <bits/stdc++.h>
using namespace std;
int tinhsolit(int y,int t){
	int x = 0;
	for(int i = t; i > 0 ;i--){
		x += y * i;
	}
	return x;
}
int main(){
	int t,y;cin>>y>>t;
	cout<<tinhsolit(y,t);
	return 0;
}