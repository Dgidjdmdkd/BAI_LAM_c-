#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define vo "BAI1"
using namespace std;
void bl(){
    freopen(vo".INP","r",stdin);
    freopen(vo".OUT","w",stdout);
}
bool check(int x){
    int k = sqrt(x);
    return k * k == x;
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
	//bl();
	int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        cout << (int)sqrt(x) << el;
    }
    return 0;
}