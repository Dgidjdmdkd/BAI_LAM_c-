#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "AT9_2026"
#define el "\n"
#define ll long long
using namespace std;

    pair<int,int> tminmax(vector<int> &a){
        int mn=a[0],mx=a[0];
        for(size_t i = 0; i < a.size();i++){
            if(a[i]>mx) mx=a[i];
            if(a[i]<mn) mn=a[i];
        }
        return {mn,mx};
    }
    //max_element(...) min_element(...)
    ll bina_search(const vector<int>& a,int x){
        int l = -1,r = a.size()-1;
        while(l <= r){
            int m = l + (r-l)/2;
            if(a[m] == x )return m;
            if(a[m] > x)l=m+1;
            else r=m-1; 
        }
        return -1;
    }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);



    return 0;
}