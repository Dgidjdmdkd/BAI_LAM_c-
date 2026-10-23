#include <bits/stdc++.h>
using namespace std;
const int maxn = 1000000;
bool snt(int a){
	if(a < 2) return false;
	if(a == 2 || a == 3) return true;
	if(a % 2 == 0 || a % 3 == 0 ) return false;
	for(int i = 5 ; i * i <= a ; i += 6){
		if(a % i == 0) return false;
	}
	return true;
}
vector<bool> vis(maxn, true);
void sang(){
	vis[0] = vis[1] = false;
	for(int i = 2 ; i * i <= maxn; i++){
		if(vis[i]){
			for(int j = i * i ; j <= maxn ; j+=i){
				vis[j] = false;
			}
		}
	}
}
void ptsnt (int a){
	vector<pair<int,int>> pts;
	for(int i = 2 ; i <= a; i++){
		if(a % i == 0){
		int cnt = 0;
		while(a % i == 0){
			cnt++;
			a /= i;
			}
			if (cnt > 0) pts.push_back({i,cnt});
		}
	}
	if(a > 1) pts.push_back({a , 1});
	cout<<"\n";
	for(auto x : pts){
		cout<<x.first<<" "<<x.second<<"\n";
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int a;
	cin>>a;
	sang();
	cout<<(snt(a) ? "yes" : "no")<<"\n";
	cout<<(vis[a] ? "yeah" : "nuh")<<"\n";
	ptsnt(a);
	return 0;
}