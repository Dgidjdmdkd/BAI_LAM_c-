#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("BAI2.INP","r",stdin);
	freopen("BAI2.OUT","w",stdout);
	
	int c;
	cin >> c;
	while(c--){
		int ct = 0,sc = 0;		
		string s;
		cin >> s;
		for(char x : s){
			if(x == '1') ct++;
		}
		int l = 1000, r = -1;
		for(int i = 0 ; i < s.length();i++){
			if(s[i] == '1') l = min(l,i);
			if(s[i] == '1') r = max(r,i);
		}
		if(ct == 0){
		cout << -1 << "\n";
		continue;
	}
		for(int i = l ; i <= r ; i++){
			if(s[i] == '0') sc++;
		}
		cout << sc << "\n";
	}
	return 0;
}