#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "BAI1"
#define ll long long
#define el "\n"
using namespace std;
int main (){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    string a;
    int n,ct=0;
    cin >> n >> a;;
    for(char x : a){
        if(!(x == 'a' || x == 'o' || x == 'i'|| x == 'e' || x == 'u') && !isdigit(x)) ct++;
    }
    cout << ct;
    return 0;
}