#include <bits/stdc++.h>
using namespace std;
int main(){
	int a = 1;
	while(a <= 1000000){
		a+=a;
		cout<<a<<endl;
		int b = 1 + a;
		cout<<b<<endl;
	}
	return 0;
}