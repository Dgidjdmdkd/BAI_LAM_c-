#include <bits/stdc++.h>
using namespace std;
bool snt(int a){
    if(a < 2) return false;
    if(a == 2 || a == 3) return true;
    if(a % 2 == 0 || a % 3 == 0) return false;
    for(int i = 5; i * i <= a; i += 6){
        if(a % i == 0 || a % (i + 2) == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int x : a){
        if(snt(x)){
            cout<<x<<" ";
        }
    }
    return 0;
}