#include <bits/stdc++.h>
using namespace std;
bool timsnt(int ktr){
	if(ktr < 1) return false;
	for(int i = 2 ; i <= sqrt(ktr);i++){
		if(ktr % i == 0) return false;
	}
	return true;
}
int main(){
	int n;cin>>n;
	int a[n];
	for ( int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	for  (int i = 0 ; i < n ; i++){
		if(timsnt(a[i])){
			cout<<"so nt "<<a[i]<<endl;
		}else{
			cout<<"so "<<a[i]<<" khph snt"<<endl;
		}
	}
	return false;
}
