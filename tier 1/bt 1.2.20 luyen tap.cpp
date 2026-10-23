#include <bits/stdc++.h>
using namespace std;
int fp (int a[],int n,int x){
	int l = 0,r = n - 1,res = -1;
	while (l <= r){
		int m = ( r + l) / 2;
		if (a[m] == x) {
		res = m ; r = m - 1;
		}else if (a[m] < x) {
		l = m + 1;
		}else{
		r = m - 1;
		}
	}
	return res;
}
int lp (int a[],int n,int x){
	int l = 0,r = n - 1,res = -1;
	while ( l <= r){
		int m = (r + l) /2;
		if ( a[m] == x ){
			res = m ; l = m + 1;
		}else if (a[m] < x){
			l = m + 1;
		}else{
			r = m - 1;
		}
	}
	return res;
}
int main(){
	int a;cin>>a;
	vector<int> v(a);
	for (int i = 0 ; i < a ; i++){
		cin>>v[i];
	}
	int x;cin>>x;
	cout<<fp(v.data(),a,x)<<"  "<<lp(v.data(),a,x);
	return 0;
}