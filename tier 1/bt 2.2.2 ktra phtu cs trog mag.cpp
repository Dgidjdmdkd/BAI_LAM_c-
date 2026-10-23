#include <bits/stdc++.h>
using namespace std;

bool ham1(int a){	
	bool ds = true;
	int x;
	vector<int> m1(a);
	cout<<"nhap cac phtu co trog mang :";
	for(int i = 0;i<a;i++){
		cin>>m1[i];
	}
	cout<<"nhap phtu can tim trong mang :"; 
	cin>>x;
	for(int i = 0;i<a;i++){
		if(m1[i]==x){
			ds = true;
			break;
		}
		if(ds){
			cout<<"ptu "<<x<<" xuat hien trong mang"<<endl;
		}else{
			cout<<"ptu"<<x<<" kh xuat hien !"<<endl;
		}
	}
return ds;
}
int main(){
	cout<<"nhap so lgphtu :";
	int a;cin>>a;
	ham1(a);
}
