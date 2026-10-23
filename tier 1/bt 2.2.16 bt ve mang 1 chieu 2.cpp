#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	cout<<"nhap so can tim x :";
	int x;int count = 0;cin>>x;
	for(int i = 0 ; i < n ; i++){
		if( a[i] == x ){
			count++;
		}
	}
	cout<<" "<<x<<" dc lp "<<count;
	return 0;
}