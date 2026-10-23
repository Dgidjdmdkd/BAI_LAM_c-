#include <bits/stdc++.h>
using namespace std;
bool chuaso6(int a){
	while(a){
		if (a%10==6) return true;
	} a/=10;
return false;
}
bool tongchan(int a){
	int ds = 0;
	while (a){
	ds += a % 10; 
	a /= 10;
return ds % 2 == 0;
}
}
bool chanle(int a){
	int chan = 0,le = 0;
	while(a){
		if(a%2==0) chan++;
		else le++;
	a/=10;
	}
	return le > chan;
}
int main(){
	int a;cin>>a;
	if(chuaso6(a) && tongchan(a) && chanle(a)){
	cout<<a;
	}else{
		cout<<"khong du dkien";
	}
return 0;
}
