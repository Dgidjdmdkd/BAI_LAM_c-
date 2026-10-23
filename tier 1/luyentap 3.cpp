#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	while(b!=0){
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
int lcm(int a,int b){
	return (a * b) / gcd(a,b);
}
bool hh(int a){
	int temp = 1;
	for(int i = 2 ; i * i <= a ; i++){
		if(a / i == i) temp += i;
		if(i != a / i) temp += a/i;
	}
	return temp == a && a != 1;
}
void sang(int a){
	vector<bool> snto(a + 1, true);
	snto[0] = snto[1] = false;
	for(int i = 2 ; i * i <= a ; i++){
		if(snto[i]){
			for(int j = i * i; j <= a ; j+=i){
				snto[j] = false;
			}
		}
	}
	for(int i = 2 ; i <= a ; i++){
		if(snto[i]) cout<<i<<" ";
	}
}

void ts(int n) {
    cout << n << " = ";
    bool dau = true;
    for (int i = 2; i * i <= n; ++i) {
        int dem = 0;
        while (n % i == 0) {
            ++dem;
            n /= i;
        }
        if (dem > 0) {
            if (!dau) cout << " * ";
            cout << i << "^" << dem;
            dau = false;
        }
    }
    if (n > 1) {
        if (!dau) cout << " * ";
        cout << n << "^1";
    }
    cout << endl;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int a;cin>>a;
	ts(a);
	cout<<"\n";
	sang(a);
	return 0;
}