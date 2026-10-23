#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "TRONGCAY"
using namespace std;
bool check(int n){
    if(n < 2) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5 ; i * i <= n ; i+=6){
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    int n;
    cin >> n;
    vector<int> vt(n),tmp;
    deque<int> re;
    bool ok = true;
    for(int &x : vt){
        cin >> x;
        if(check(x)) tmp.push_back(x);
    }
    sort(tmp.begin(),tmp.end(),greater());
    for(int &x : tmp){
        if(ok){
            re.push_front(x);
        }else{
            re.push_back(x);
        }
        ok=!ok;
    }
    if(re.empty()) cout << -1;
    else for(int i : re) cout << i << ' ';
    return 0;
}