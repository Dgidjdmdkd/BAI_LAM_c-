#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
	return ((a + b) > (b + a));
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int g;cin>>g;
	vector<string> v(g);
	for(int i = 0 ; i < g ; i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end(),cmp);
	string b ="";
	for(int i = 0 ; i < g ; i++){
		b+=v[i];
	}
	if(b[0] == '0' && b.length() > 1){
		cout<<"0"<<"\n";
	}else{
		cout<<b;
	}
	return 0;
}
