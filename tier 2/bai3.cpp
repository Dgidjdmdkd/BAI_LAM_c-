#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    vector<int> vt(n);
    for(int i = 0; i < n; i++){
        cin >> vt[i];
    }
    int x;cin>>x;
    for(int i = 0; i < n; i++){
        if(vt[i] != x){
            cout << i << " ";
        }
    }
    return 0;
}