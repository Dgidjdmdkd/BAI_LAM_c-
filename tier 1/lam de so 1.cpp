#include <bits/stdc++.h>
using namespace std;

bool snt(int a){
	if(a < 2) return false;
	if(a == 2 || a == 3) return true;
	if(a % 2 == 0 || a % 3 == 0) return false;
	for(int i = 5 ; i <= a ; i+=6){
		if(a % i == 0) return false;
	}
	return true;
}
int sntduoi(int n){
	int re = n;
	while(n >= 2){
		if(snt(n)) return re;
		re--;
	}
	return -1;
}
int snttren(int n){
	int re = n;
	while(true){
		if(snt(re)) return re;
		re++;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int a;
	cin>>a;
	if(sntduoi != 0){
	int t = sntduoi(a);
	int d = snttren(a);
	cout<<t<<"\n"<<d;
}
	return 0;
}