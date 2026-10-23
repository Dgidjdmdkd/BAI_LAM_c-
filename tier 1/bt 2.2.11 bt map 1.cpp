#include <bits/stdc++.h>
using namespace std;
int main(){
	int testkey;//t?o test key
	cin>>testkey;
	while (testkey--){
		int n;cin>>n;//nh?p s? lg pt? c?a m?ng 
		map <long long,bool> mp;
		for(int i = 0;i < n;i++){
				long long x;cin>>x;//nh?p giá tr? ptu c?a m?ng
				mp[x] = true;//cho t?t c? các ph?n t? là true
		}
		for(int i = 0;i < n;i++){
				if(mp[i]){
					cout<<i;
				}else{
					cout<<"-1";
				}
		}//do ch? duy?t t? 0 - 10 
		
	}
	return 0;
}