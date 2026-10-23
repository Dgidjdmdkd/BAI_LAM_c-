#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define BL "SOUARE"
#define el "\n"
using namespace std;

int n = 1e6 + 7,g = 0;
vector<bool>sang(n,true);
void sieve(){
    sang[1] = sang [0] = false;
    for(int i = 2 ; i * i < n ; i++){
        if(sang[i]){
            for(int j = i * i ; j < n ; j+= i){
                sang[j] = false;
            }
        }
    }
}
bool check(int n ){
    int k = sqrt(n);
    return k*k == n;
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    freopen(BL".INP", "r", stdin);
    freopen(BL".OUT", "w", stdout);

    int n ;
    cin >> n;
    /*
    sieve();
    for(int i = 2 ; i < n ; i++){
        if(sang[i] && check(i)){
            cout << i << el;
        }
    }
    */
    // đang làm dở thì nhận ra KHÔNG có số nào thỏa mãn như thế cả!!!
    cout << g;
    return 0;
}