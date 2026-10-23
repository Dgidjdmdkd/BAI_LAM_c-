#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	getline(cin,s);
	for (size() i = 0 , i < s.length() , i++){
		if( s[i] == '1'){
			s.replace(i,1,"one");
		}
	}
	cout<<s;
	return 0;
}