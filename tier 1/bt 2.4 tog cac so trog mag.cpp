#include <bits/stdc++.h>
using namespace std;
int ham1(int mang1[],int a){
    int tong = 0;
	for(int i = 0;i<a;i++){
		tong+=mang1[i];
	}
return tong;
}
int main (){
	cout<<"nhap so luong phan tu co trong mang :\n";
	int a;cin>>a;
	int mang1[a];
	cout<<"nhap cac phan tu co trong mang : \n";
	for(int i = 0;i<a;i++){
		cout<<"phan tu thu "<<i+1<<" la :";
		cin>>mang1[i];
	}
	int tong = ham1(mang1,a);
	cout<<"tong cua cac so co trong mang :"<<tong<<endl;
	return 0;
}

