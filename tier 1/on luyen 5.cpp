#include <bits/stdc++.h>
using namespace std;
const int maxn = 10000001;
vector<bool> es(maxn,true);
void sang (){
	es[0] = es[1] = false;
	for(int i = 2 ; i * i <= maxn ; ++i){
		if(es[i]){
			for(int j = i * i ; j <= maxn ; j+=i){
				es[j] = false;
			}
		}
	}
}
bool dk2(int a){
	for(int i = 0 ; i <= 9 ; ++i){
		int tmp = a;
		tmp = tmp * 10 + i;
		if(tmp < maxn && es[tmp]) return true;
	}
	return false;
}
bool dk3(int a){
	while(a > 0){
		if(!es[a]) return false;
		a /= 10;
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int a;
	cin>>a;
	vector<int> m1(a + 1);
	for(int i = 1 ; i <= a ; ++i){
		cin>>m1[i];
	}
	sang();
	int tc;
	cin>>tc;
	while(tc--){
	int l ,r,cnt = 0;
	cin>>l>>r;
	for(int i = l ; i <= r ; ++i){
		if(dk3(m1[i]) && dk2(m1[i]) && es[m1[i]]) cnt++;
		}
	cout<<cnt<<"\n";
	}
	return 0;
}