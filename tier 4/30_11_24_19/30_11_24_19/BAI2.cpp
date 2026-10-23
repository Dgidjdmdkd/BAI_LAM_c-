#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define vo "BAI2"
using namespace std;
void bl(){
    freopen(vo".INP","r",stdin);
    freopen(vo".OUT","w",stdout);
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
	bl();
	int n;
	cin >> n;
	map<int,int> vt;
	for(int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		vt[x]++;
	}
	int rv=0,rk=0;
	for(auto it = vt.begin() ; it != vt.end() ; ++ it){
		if(it -> second > rk){
			rk = it -> second;
			rv = it -> first;			
		}
	}
	cout << rv << ' ' << rk;
	
	return 0;
}