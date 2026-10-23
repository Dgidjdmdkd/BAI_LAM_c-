#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "PASSWORD"
#define el "\n"
#define ll long long
#define F false
using namespace std;
bool check(string a){
    if(a.length() < 6) return F;
    bool dk1 = F,dk2 = F,dk3 = F;
        for(char x : a){
            if(isupper(x)) dk1 = true;
            else if(islower(x)) dk2 = true;
            else if(isdigit(x)) dk3 = true;
        }
    return dk1 && dk2 && dk3;
}

    int main(){
    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);
    string a;
    cin >> a;
    int le = a.length();
    set<string> st;
    for(int i = 0 ; i < le ; i++){
        for(int j = 6 ; i + j <= le ; j++){
            string su = a.substr(i,j);
            if(check(su)){
                st.insert(su);
            }
        }
    }
    cout << st.size();
    return 0;
}