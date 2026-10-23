#include <bits/stdc++.h>
using namespace std;
vector<int> taopfs(vector<int> m1){
	int cnt = m1.size();
	vector<int> pfs(cnt);
	pfs[0] = m1[0];
	for(int i = 1; i < cnt ; i++){
		pfs[i] = pfs[i - 1] + m1[i];
	}
	return pfs;
}
int ktr(vector<int> pfs , int l , int r){
	if(l == 0){
		return pfs[r];
	}
	return pfs[r] - pfs[l - 1];
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int a;cin>>a;
	vector<int> m1(a);
	for(int i = 0 ; i < a ; i++){
		cin>>m1[i];
	}
	vector<int> pfs = taopfs(m1);
	int tc;cin>>tc;
	while(tc--){
		int l,r;
		cin>>l>>r;
		int sum = ktr(pfs , l , r);
		cout<<sum<<" ";
	}
	return 0;
}