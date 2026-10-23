#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a, res;
    getline(cin, a);
    /*
    for(int i = 0 ; i < a.length(); i++){
        if(isalpha(a[i])) res += a[i];
    }
    */
    for(char c : a){
        if(isalpha(c)) res += c;
    }
    cout << res << "\n";
    return 0;
}