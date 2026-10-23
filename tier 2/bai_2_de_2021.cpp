#include <bits/stdc++.h>
using namespace std;

bool isp(int n){
    if(n < 2) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5 ; i * i <= n ; i += 6){
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
bool dk1(int n){
    if(!isp(n)) return false;
    for(int i = 0 ; i < 10 ; i++){
       if(isp(n * 10 + i)){
            return true;
       } 
    }
    return false;
}
bool dk2(int n){
    while(n > 0){
        if(!isp(n)) return false;
        n /= 10;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    vector<long long> v(n + 1);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    int tc;
    cin >> tc;
    while(tc--){
        int l,r,cnt = 0;
        cin >> l >> r;
        for(int i = l ; i <= r ; i++){
            if(dk1(v[i]) && dk2(v[i])) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}