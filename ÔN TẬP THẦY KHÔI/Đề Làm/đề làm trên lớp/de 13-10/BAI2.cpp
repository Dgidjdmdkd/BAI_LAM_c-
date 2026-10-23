#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    string ch;
    while(cin >> ch){
        int tmp = ch.size();
        unordered_set<string> st1;

        for(int giua = 0 ; giua < tmp;giua++){
            int l = giua, r = giua;
            while(l >= 0 && r < tmp && ch[l] == ch[r]){
                int tmpk = r - l + 1;
                st1.insert(ch.substr(l,tmpk));
                l--;r++;
            }
        }
        for(int giua = 0 ; giua < tmp - 1;giua++){
            int l = giua, r = giua + 1;
            while(l >= 0 && r < tmp && ch[l] == ch[r]){
                int tmpk = r - l + 1;
                st1.insert(ch.substr(l,tmpk));
                l--;r++;
            }
        }
        cout << st1.size() << "\n";
    }
    return 0;
}