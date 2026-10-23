#include <bits/stdc++.h>
using namespace std;
int gthua(int a){
int ds = 1;
if (a >= 0 && a<=15){
	for(int i=1;i<=a;i++){
		ds*=i;
	}cout<<ds;
}else{
	cout<<"hay nhap lai so !";
}
return 0;
}
int main(){
    ios::sync_with_stdio(false);
	int a;cin>>a;
	gthua(a);
	return 0;
}


