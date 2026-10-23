#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define vo "BAI1"
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
	vector<int> vt(n);
	for(int &x : vt) cin >> x;
	for(int i = 0 ; i < n ; i++){
		string a;
		while(vt[i] > 0){
			int tmp = vt[i] % 16;
			if(tmp > 9){
				a += (char)('A'+tmp%10);
			}else{
				a += to_string(tmp);
			}
			vt[i] /= 16;
		}
		reverse(a.begin(),a.end());
		cout << a << el;
	}
    return 0;
}