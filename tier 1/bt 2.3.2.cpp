#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	cin.ignore();
	string s;
	getline(cin,s);
	//cout<<a<<" "<<s<<endl;
	//cout<<s[2];
	//for(int i = 0 ; i < s.length();i++){
	//	cout<<s[i]<<"  ";
	//}
	for(char x : s){
		cout<<x;
	}
	return 0;
}



