#include <bits/stdc++.h>
using namespace std;
bool ktra(string s){
	int l = 0,r = s.length() - 1;
	for(int i = l ; i <= r ; i++){
		if(s[l] != s[r]){
			return false;
		}else{
			l++;
			r--;
		}
	}
	return true;
}
int ktdem (string a){
	char g;int ct = 0;
	cin>>g;
	for(char x : a){
		if(x == g){
			ct++;
		}
	}
	return ct;
}
int ktdtu (string a){
	stringstream ss(a);
	int cnt = 0;
	string b;
	while(ss >> b) cnt++;		 
	return cnt;
}
string dao (string a){
	stringstream ss(a);
	vector<string> ns;
	string b;
	while(ss >> b){
		ns.push_back(b);
	}
	string res = "";
	for(int i = ns.size() - 1 ; i >= 0 ; i--){
		res += ns[i];
	if(i > 0) res+=' ';
}
	return res;
}
string xaudnh(string a){
	string xcd = "";string smax = "";
	for(char x : a){
		if(isalpha(x)) xcd += x;	
	else{
		if(xcd.length() > smax.length()){
			smax = xcd;
		}
		xcd = "";
		}
	}
	if(xcd.length() > smax.length()){
		smax = xcd;
	}
	return smax;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	string a;
	getline(cin,a);
	//cout<<(ktra(a) ? "yea" : "no");
	//cout<<ktdem(a);
	//cout<<ktdtu(a);
	//cout<<dao(a);
	cout<<xaudnh(a);
	return 0;
}