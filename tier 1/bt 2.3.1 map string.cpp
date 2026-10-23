#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    map<string, int> m1;

    for(int i = 0; i < a; i++){
        string s;
        cin >> s;
        cin >> m1[s];
        m1[s]++;
    }

    for(map<string, int>::iterator it = m1.begin(); it != m1.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}

