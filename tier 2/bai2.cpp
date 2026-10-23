#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin>>n;
    vector<int> vi(n);
    for(int i = 0; i < n; i++){
        cin >> vi[i];
    }
    int sum = 0,min = vi[0], max = vi[0];
    
    for(int x : vi){
        sum += x;
        if(x < min) min = x;
        if(x > max) max = x;
    }
    cout << "sum = " << sum << endl;
    cout << "min = " << min << endl;
    cout << "max = " << max << endl;
    return 0;
}