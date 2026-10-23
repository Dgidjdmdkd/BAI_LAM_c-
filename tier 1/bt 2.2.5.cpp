#include <bits/stdc++.h>
#include <vector>
using namespace std;
void nhapso(vector<int>& a,int g){
	cout<<"nhap cac so co trong mang\n";
	for(int i = 0; i < g ; i++){
		int so;cin>>so;
		a.push_back(so);
	}
}
void solson(vector<int>& a,int t){
	if(a.empty()){
		cout<<"mang rong";
	}
	int max = *max_element(a.begin(),a.end());
	int min = *min_element(a.begin(),a.end());
	cout<<"so lon nhat co trong mang :"<<max<<endl;
	cout<<"so nho nhat co trong mang :"<<min<<endl;
}
int main(){
	cout<<"nhap so lgphtu trong mang\n";
	int a;cin>>a;
	vector<int> mang1;
	nhapso(mang1,a);
	solson(mang1,a);
	return 0;
} 
