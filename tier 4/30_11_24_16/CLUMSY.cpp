#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
//#pragma GCC optimize ("unroll-loop")
#define VO "BTL1"
#define el "\n"
#define ll long long
using namespace std;

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	//freopen(VO".INP","r",stdin);
	//freopen(VO".OUT","w",stdout);
    string a;
	cin >> a;
	stack<char> st;
	for(int i = 0 ; i < (int)a.size();i++){
		if(a[i] == ')'){
			if(!st.empty() && st.top() == '('){
				st.pop();
			}else{
				st.push(')');
			}
		}else{
			st.push( '(' );
		}
	}
	cout << st.size();
	return 0;
}
