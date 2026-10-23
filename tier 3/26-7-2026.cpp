#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    freopen("Bon1st.inp","r",stdin);
    freopen("Bon1st.out","w",stdout);
    int k;
    cin >> k;
    vector<float> s1(k);
    for(float &x : s1){
        cin >> x;
    }

    map<float, int> mp1;
    for(float &x : s1){
        mp1[x]++;
    }
    
    cout << fixed << setprecision(1); 
    int cnt = 0;
        cout << "gtri" << ' ' << 'f' << ' ' << 'c' << "\n";
    for(auto it : mp1){
        cnt += (int)it.second;
        cout << it.first << ' ' << it.second << ' ' << cnt << ' ' << "\n" ;
    }
    
    map<float, int> mp2;
    float mn = *min_element(s1.begin() , s1.end());
    
    
    return 0;
}