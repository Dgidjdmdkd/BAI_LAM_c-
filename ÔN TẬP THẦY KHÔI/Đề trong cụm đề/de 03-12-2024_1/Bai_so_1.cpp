#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    freopen("POSTER.INP","r",stdin);
    freopen("POSTER.OUT","w",stdout);
    
    int n;
    long long res = 0;
    cin >> n;
    vector<long long> d(n),w(n);
    for(int i = 0 ; i < n ; i++){
        cin>> d[i] >> w[i];
    } 
    stack<long long> s1;
    for(int i = 0 ; i < n ; i++){
        while(!s1.empty() && s1.top() > w[i]){
            s1.pop();
        }
        if(s1.empty() || s1.top() < w[i]){
            s1.push(w[i]);
            res++;
        }
    }
    cout << res;
    return 0;
}