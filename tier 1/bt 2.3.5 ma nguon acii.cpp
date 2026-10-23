#include <bits/stdc++.h>
using namespace std;
bool snt(int n){
	if (n < 2) return false;
	for(int i = 2 ; i*i <= n ; i++){
		if ( n % i == 0) return false;
	}
	return true;
}
void tinh (const vector<int> v){
	int tong = 0, dem = 0;
	for ( int x : v){
		if(snt(x)){
			cout<<x<<" ";
			dem++;
			tong+=x;
		}
	}
	cout<<"\n"<<dem<<"\n"<<tong<<"\n";
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;cin>>n;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin>>v[i];
	}
		tinh(v);

	return 0;
}