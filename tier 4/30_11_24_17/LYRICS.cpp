#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "LYRICS"
#define co const
using namespace std;

void vo(){
	freopen(bl".INP","r",stdin);
	freopen(bl".OUT","w",stdout);
}
int check(co string &a, co string &b){
    int za = (int)a.size() - 1,zb = (int)b.size() - 1,cnt=0;
    while(za >= 0 && zb >= 0 && a[za]==b[zb]){
        za--;zb--;cnt++;
    }
    return cnt;
}
int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	vo();
	int n,m,k=1000;
    cin >> n >> m;
    cin.ignore();
    vector<string> vs(n+1);
    for(int i = 1 ; i <= n ; i++) getline(cin,vs[i]);
    bool ok=0;
    for(int i = 1 ; i + m <= n ; i++){
        int tmp = check(vs[i],vs[i+m]);
        k = min(k,tmp);
        ok=1;
    }
    if(!ok)k=1000;
    cout<<k<<el;
	return 0;
}