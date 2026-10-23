#include <bits/stdc++.h>
using namespace std;
const int maxn = 1000000;
vector<bool> a(maxn - 1,true);
void sang(){
	a[1] = a[0] = false;
	for(int i = 2 ; i*i <= maxn ; i++){
		if(a[i]){
			for(int j = i * i ; j <= maxn ; j+=i){
				a[j] = false;
			}
		}
	}
}
int main(){
	int g;cin>>g;
	vector<int> v(g);
	sang();
	for(int i = 0 ; i < g ; i++){
		cin>>v[i];
		if(v[i] >= maxn) v[i] = 0;
	}
	for(int i = 0 ; i < g ; i++){
		if(a[v[i]] && v[i] <= maxn) cout<<i<<"\n";
	}
	return 0;
}