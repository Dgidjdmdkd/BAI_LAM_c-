#include <bits/stdc++.h>
using namespace std;
bool ls(int a[],int n,int x){
	for(int i = 0;i < n;i++){
		if(a[i]==x) return true;
	}
	return false;
}
int main(){
	int n; cin>>n;
	int x; cin>>x;
	int a[n];
	if(ls = true){
		cout<<"tim thay"<<x;
	}else{
		cout<<"khong tim thay"<<x;	}
	return 0;
}