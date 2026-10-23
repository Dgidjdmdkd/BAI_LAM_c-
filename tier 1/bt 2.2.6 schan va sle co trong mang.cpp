#include <bits/stdc++.h>
#include <vector>
using namespace std;
void nhapso(vector<int>& a,int g){
	cout<<"nhap cac so co trong mang :";
	int x; cin>>x;
	for(int i = 0; i < g ;i++){
		int x; cin>>x;
		a.push_back(x);
	}
}
void chanl(vector<int>& a,int g){
	int chan = 0;
	int le = 0;
	for(int i = 0; i < g;i++){
		if(a[i]%2==0) {
		chan++;
	}else{
		le++;
	}
}
cout<<"so chan co trong mang :"<<chan<<endl;
cout<<"so le co trong mang :"<<le<<endl;
}
int main (){
	vector<int> mang1;
	cout<<"nhap so lg ptutrong mang :";
	int a;cin>>a;
	nhapso(mang1,a);
	chanl(mang1,a);
	return 0;
}
