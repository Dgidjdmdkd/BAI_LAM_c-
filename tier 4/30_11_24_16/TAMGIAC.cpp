#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
//#pragma GCC optimize ("unroll-loop")
#define VO "BTL1"
#define el "\n"
using namespace std;

int main(){

    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    //freopen(VO".INP","r",stdin);
    //freopen(VO".OUT","w",stdout);

	int a,b,c;
	cin >> a>> b>>c;
	if(a + b + c != 180){
		cout << 0;
		return 0;
	}	
	if(a == b == c == 60) cout << "DEU";
	else if(((a == b) && c == 90)|| ((a == c) && b == 90)|| ((b == c) && a == 90)) cout << "VUONG CAN";
	else if((a == b) || (a == c) || (b == c)) cout << "CAN";
	else if( a == 90 || b == 90 || c== 90) cout << "VUONG";
	else cout << "THUONG";
	return 0;
}
