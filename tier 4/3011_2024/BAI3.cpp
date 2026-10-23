#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define ll long long
#define bl "BAI3"
#define el "\n"
using namespace std;
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    int n;
    cin >> n;
    while(n--){
    string a,b;
    while(cin >> b) a+=b;
    map<char,int> mp;
    for(char x : a) mp[x]++;
    cout << (mp.size() == 26 ? "YES" : "NO") << el;
    }
    return 0;
}