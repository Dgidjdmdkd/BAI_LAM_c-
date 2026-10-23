#include <bits/stdc++.h>
#include <vector>
using namespace std;
void ttong(int a){
	vector <int> m1(a);
	cout<<"nhap cac ptu co trong vector :";
	for(int i = 0;i<a;i++){
		cin>>m1[i];
	} 
	int max = m1[0];
	int min = m1[0];
	int mid = m1[0];
	for(int i = 0; i < a ; i++){
	    if(m1[i]>max) max = m1[i];
	    if(m1[i]<min) min = m1[i];
	    if(m1[i]>min && m1[i]<max);
	}
	cout<<"so lon nhat co trong mang :"<<max<<endl;
	cout<<"so nho nhat co trong mang :"<<min<<endl;
    cout<<"so o giua :"<<mid;
}
void chanl(int a){
	int chan = 0;
	int le = 0;
	vector <int> m2(a);
		for(int i = 0;i<a;i++){
			cin>>m2[i];
		if(m2[i]%2==0){
		chan++;
		}else{
		le++;
		}
		}
	cout<<"so chan co trong mang :"<<chan<<endl;
	cout<<"so le co trong mang :"<<le<<endl;
}
int main(){
	cout<<"nhap so lg ptu co the chua trong vector"<<endl;
	int a;cin>>a;
	ttong(a);
	chanl(a);
	return 0;
}
