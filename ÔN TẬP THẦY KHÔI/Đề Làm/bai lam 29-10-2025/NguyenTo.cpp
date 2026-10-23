#include <bits/stdc++.h>
using namespace std;
bool isp(long long a){
    if(a < 2) return false;
    if(a == 2 || a == 3) return true;
    if(a % 2 == 0 || a % 3 == 0) return false;
    for(int i = 5; i * i <= a ; i+=6){
        if(a % i == 0 || a % (i + 2) == 0) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("NguyenTo.INP", "r",stdin);
    freopen("NguyenTo.OUT", "w",stdout);
    int a;
    cin >> a;
    vector<long long> v1(a);
    for(int i = 0; i < a; i++) cin >> v1[i];

    for(int i = 0 ; i < a; i++){
        cout << (isp(v1[i]) ?  "YES" : "NO") << "\n";
    }
    return 0;
}