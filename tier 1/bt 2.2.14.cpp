#include <bits/stdc++.h>
using namespace std;
bool ktranto(int a){
	if (a <= 0) return false;
	if (a == 2)	return true;
	if (a % 2 == 0) return false;
	for (int i = 3 ; i < sqrt(a) ; i+=2){
		if ( a % i == 0 ) return false;
	}
	return true;
}
int ttong(int a){
	int tong = 0;
	for (; a > 0 ; a /= 10){
		tong += a % 10;
	}
	return tong;
}	
int main(){
	int a ; cin >> a ;
	cout << ((ktranto(ttong(a))) ? "yes" : "no");
	return 0;
}