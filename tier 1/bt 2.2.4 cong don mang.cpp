#include <bits/stdc++.h>
#include <vector>
using namespace std;

void nhapso(vector<int>& a,int g){
	for(int i = 0 ; i < g ; i++){
			int x;cin>>x;
			a.push_back (x);
	} 
}
int mangcongdon(vector<int>& a,int g){
   int ds = 0;
   for(int i =0 ;i<g;i++){
	   ds+=a[i]; 
   }
   return ds;	
}
int main(){
	int a;cin>>a;
	vector<int> mang1;
	nhapso(mang1,a);
	int tong = mangcongdon(mang1,a);
	cout<<tong;
	return 0; 
}
