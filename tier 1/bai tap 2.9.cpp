#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a;
    cin>>a;
    vector<int> g(a);
    for(int i = 0 ; i < a ; i++){
        cin>>g[i];
    }
    vector<int> pre(a + 1);
    pre[0] = g[0];
    for(int i = 1 ; i < a ; i++){
        pre[i] = pre[i - 1] + g[i - 1];
    }
    int tc;cin>>tc;
    while(tc--){
        int l , r,res = 0;
        cin>>l>>r;
        for(int i = l ; i < r ; i++){
            res = pre[r] - pre[l - 1];
        }
    }
    return 0;
}


