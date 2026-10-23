#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a;
    int cnt = 0;
    getline(cin, a);
    for(int i = 0 ; i < a.length() ;i++ ){
        if(isalpha(a[i])) cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}