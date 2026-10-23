#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define vo "BAI3"
using namespace std;
void bl(){
    freopen(vo".INP","r",stdin);
    freopen(vo".OUT","w",stdout);
}
string sbe(string a){
	for(auto &x : a) x = tolower(x);
	return a;
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
	bl();
	string a,b;
	cin >> a >>b;
	b=sbe(b);
	size_t pos = a.find(b);
	while (pos != string::npos) {
        a.erase(pos, b.size());
        pos = a.find(b);
    }
	cout << a;
	return 0;
}