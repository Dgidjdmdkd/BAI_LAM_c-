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
    sort(vt.begin(),vt.end());
	for(int i = 0; i < n; i++){
        cout<<vt[i]<<"  ";
    }
    return 0;
}