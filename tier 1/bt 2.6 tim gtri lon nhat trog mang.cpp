#include <iostream>
using namespace std;
int main (){
	cout<<"nhap solg phtu trong mang :";
	int a;cin>>a;
	int max;
	int mang1[a];
	for(int i=0;i<a;i++){
		cout<<"so thu "<<" "<<i+1<<" trong mang :";
		cin>>mang1[i];
	}
	max = mang1[0];
	for (int i = 0; i< a;i++){
		if(mang1[i]>max){
			max = mang1[i];
		}
	}
	cout<<"gia tri phan tu lon nhat trong mang :"<<max;
	return 0;
}
