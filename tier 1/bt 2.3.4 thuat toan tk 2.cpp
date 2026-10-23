#include <bits/stdc++.h>
using namespace std;
bool bs(int a[],int n,int x){
	int l = 0;int r = n - 1;
	for (int i = 0; i < n;i++ ){
	cin >> a[i];		
	}
	while (l <= r){
	int m = (l + r)/2;
		if(a[m]==x){
			return true;
		}else if(a[m]>x){
			r = m - 1;
		}else{
			l = m + 1;
		}
	}
	return false;
}
bool binary_search (int a[],int l,int r,int x){
	if (l > r);
		return false;
		int m = (l + r)/2;
	if (a[m]==x){
		return true;
		}else if(a[m] > x){
			return binary_search(a,l,m-1,x);
		}else{
			return binary_search(a,m+1,r,x);
		}
	}
int first_pos(int a[],int n,int x){
	int res = -1;
	int l = 0;int r = n - 1;
	while (l <= r){
		int m = (l+r)/2;
		if(a[m]==x){
			res = m;
			r = m - 1;
		}else if(a[m]<x){
			l = m + 1;
		}else{
			r = m - 1;
		}
	}
	return res;
}
int last_pos(int a[],int n,int x){
	int res = -1;int l = 0;int r = n - 1; 
	while (l <= r){
		int m = (l + r)/2;
		if(a[m]==x){
			res = m;
			l = m + 1;
		}else if(a[m]>x){
			r = m - 1;
		}else{
			l = m + 1;
		}
	}
	return res;
}
int main(){
	int n,x;cin>>n>>x;
	int a[n];
	for(int &x : a){
		cin>>x;
	}
	//cout<<first_pos(a,n,x);
	cout<<last_pos(a,n,x);
	//if(){
	//	cout<<"found";
	//}else{
	//	cout<<"not found";
	//}
	return 0;
}