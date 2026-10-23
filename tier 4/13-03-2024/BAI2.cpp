#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "BAI2"
using namespace std;
int check(string &s){
    int n = s.size();
    set<string> st;
    for(int i = 0 ; i < n ; i++){
        int l = i, r = i;
        while(l >= 0 && r < n && s[l] == s[r]){
            st.insert(s.substr(l,r-l+1));
            l--;r++;
        }
        l=i; r =i +1;
        while(l >= 0 && r < n && s[l] == s[r])
            st.insert(s.substr(l,r-l+1));
            l--;r++;
    }
    return st.size();
    
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    string s;
    while(cin >> s){
        if(!s.empty()) cout << check(s) << "\n";
    }

    return 0;
}