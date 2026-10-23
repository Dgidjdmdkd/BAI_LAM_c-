#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "bai2"
using namespace std;

void uoc(int a,int b){
   vector<int> vt1, vt2;
    for (int i = 1; i < a; i++)
    if (a% i ==0)vt1.push_back(i);
    for (int i = 1; i < b; i++)
    if(b % i== 0) vt2.push_back(i);
    for (int i = 0;i < min(vt1.size(),vt2.size()); i++)
    {
    if (vt1[i] == vt2[i])
    continue;
    else
        {
    cout <<0;
    return;
        }
    }
    cout <<1;
}

int main(){
    cout.tie(nullptr);
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".inp","r",stdin);
    freopen(bl".out","w",stdout);
    int n,m;
    cin >> n >> m;
    uoc(n,m);

    return 0;
}