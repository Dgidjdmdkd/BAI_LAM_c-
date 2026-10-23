#include <bits/stdc++.h>
using namespace std;
int tvr (int a[],int n,int x){
	int res = -1,l = 0,r = n - 1;
	while(l <= r){
	int m = l + (r - l)/2;
	if (a[m] > x){
		res = m;
		r = m - 1;
	}else{
		l = m + 1;
	}
	}
	return res;
}
int main(){
	int a,x;cin>>a>>x;
	vector<int> v(a);
	for ( int i = 0 ; i < a ; i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int pos = tvr(v.data(),a,x);
	if (pos != -1){
		cout<<"phan tu dau tien  "<<x<< " o vi tri " <<pos<<" la "<<v[pos];
	}else{
		cout<<-1;
	}
return 0;
}
