#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;cin>>a;
	set<int> ms1;
	for(int i = 0 ; i < a; i++){
		int x;cin>>x;
		ms1.insert(x);
	}
	cout<<endl;
	int ct;cin>>ct;
	for(set<int>::iterator it = ms1.begin(); it != ms1.end();it++){
		if(ms1.find(ct) != ms1.end()){
		cout<<"found";
		break;
		}else{
		cout<<"not found";
		break;
		}
	for(set<int>::iterator it = ms1.begin(); it != ms1.end();it++){
		ms1.erase(ct);
		cout<<ms1.size()<<" ";
	}

	}
	return 0;
} 
