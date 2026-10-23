#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
	set<int> h1;
	for (int i = 0;i<a;i++){
		h1.insert(i);
		cout<<h1.size()<<endl;
	} 
	if (h1.count(5)!=0){
		cout<<"found !";
	}else{
		cout<<"not found";
	}
	return 0;
}
