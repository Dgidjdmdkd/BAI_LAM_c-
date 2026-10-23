#include <bits/stdc++.h>
#include <vector>
using namespace std;
void nhapmang(vector<int>& a,int g){
	for (int i = 0;i<g;i++){
		int x;cin>>x;
		a.push_back (x);
	}
}
void daonguocmang(vector<int>& a){
    int left = 0;int right = a.size()-1;
	while (left < right){
		swap(a[left],a[right]);
		left++;
		right--;
	}	
} 
void inmang(vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
	cout<<"nhay nhap cac so trong vector :";
	int a;cin>>a;
	vector<int> mang1;
	nhapmang(mang1,a);
	cout<<"mang ban dau";
	inmang(mang1);
	daonguocmang(mang1);
	cout<<"mang sau khi dao nguoc";
	inmang(mang1);
	return 0;
}
