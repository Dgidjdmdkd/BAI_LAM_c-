#include <bits/stdc++.h>
using namespace std;
int lentieptongk(int a[] ,int n,int k){
	long long sum = 0;
	int maxlen = 0;
	unordered_map<int,int> mp;
	for(int i = 0 ; i < n ; i++){
		sum+= a[i];
		if(sum == k){
			maxlen = i + 1;
		}
		if(mp.find(sum) == mp.end()){
			mp[sum] = i;
		}
		if(mp.find(sum - k) != mp.end()){
			if(i - mp[sum - k] > maxlen){
				maxlen = i - mp[sum - k];
			}
		}
	}
	return maxlen;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n ;
	cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	int k;
	cin>>k;
	cout<< lentieptongk( a , n , k) << "\n";
	return 0;
}