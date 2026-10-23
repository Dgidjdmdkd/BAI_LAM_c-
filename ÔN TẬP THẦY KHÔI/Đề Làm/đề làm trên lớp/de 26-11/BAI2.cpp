#include <bits/stdc++.h>
using namespace std;
void tinh(int a,vector<int>& v2){
    int s1,s2;
    s1 = a / 10;
    s2 = a % 10;
    v2.push_back(s1);
    v2.push_back(s2);
}
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("BAI2.INP","r",stdin);
    //freopen("BAI2.OUT","w",stdout);
    int n;cin>> n;
    while(n--){
        int x;cin >> x;
        vector<int> v1(x),v2;
        bool ok = true;
        for(int i = 0 ; i < x ; i++){
            cin >> v1[i];
        }
        for(int i = 0 ; i < x ; i++){
            if(v1[i] < 10) v2.push_back(v1[i]);
            else{
                tinh(v1[i],v2);
            }
        }
        for(int i = 0 ; i + 1 < v2.size() ; i++){
            if(v2[i + 1] < v2[i]){
            ok = false;
            break;
            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}