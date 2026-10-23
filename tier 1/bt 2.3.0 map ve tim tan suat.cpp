#include <bits/stdc++.h>
using namespace std;
int main(){
	map<int,int> hs1;
	int a[100];
	int n;cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i];
		hs1[a[i]]++;
	}
	for(int i = 0;i < n; i++){
		if(hs1[a[i]]!=0){
			cout<<a[i]<<" "<<hs1[a[i]]<<endl;
			hs1[a[i]]==0;
		}
	}
	return 0;
}
