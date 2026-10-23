#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "CWORD"
using namespace std;

void vo(){
	freopen(bl".INP","r",stdin);
	freopen(bl".OUT","w",stdout);
}

int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	vo();
	string t;
	getline(cin,t);
	stringstream ss(t);
	int cnt = 0 ;
	string a;
	while(ss >> a){
		int n = a.size();
		if(n % 2 == 0){
			int l = n/2, r = n/2 + 1;
			while(l >= 0 && r <= n){
				if(a[l - 1] != a[r - 1]){
					break;
				}
				cnt++;
				l--;
				r++;
			}
		}else{
			int l = n/2 - 1, r = n/2 + 1;
			while(l >= 0 && r <= n - 1){
				if(a[l - 1] != a[r - 1]){
					break;
				}
				cnt++;
				l--;
				r++;
			}
		}	
	}
	cout << cnt << el;
	return 0;
}