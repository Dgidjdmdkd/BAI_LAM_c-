#include<bits/stdc++.h>
using namespace std;
bool snt(int n){
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n  % 3 == 0) return false;
    for(int i = 5 ; i * i <= n ; i+=6){
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int dao (int n){
    int res = 0;
    while(n > 0){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int q,p;
    cin>>q>>p;
    int cnt = 0;
    for(int i = q; i <= p;i++){
        if(snt(dao(i))) cnt++;
    }
    cout <<cnt<<"\n";
    return 0;
}