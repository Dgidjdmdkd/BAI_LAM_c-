#include <bits/stdc++.h>
using namespace std;
bool check(string a){
    int l = 0,r = a.length() - 1;
    while(l < r){
        if(a[l] != a[r]) return false;
        l++;
        r--;
    }
    return true;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n;
cin >> n;

    for(int i = 0 ; i < n ; i++){
    string t;
    cin >> t;
    cout << (check(t) ? "co" : "khong") << "\n";
    }
return 0;
}