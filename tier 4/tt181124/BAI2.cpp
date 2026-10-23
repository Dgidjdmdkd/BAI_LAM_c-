#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define bl "BAI2"
#define ll long long 
using namespace std;


int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);

    int n,re = 0;
    cin >> n;
    vector<int> vt(n);
    for(int i = 0 ; i < n ; i++){
        cin >> vt[i];
    }
    sort(vt.begin(),vt.end());
    for(int i = 0 ; i < n ; i++){
        int l=0,r=n-1;
        while(l < r){
            int sum =vt[l] +vt[r];
            if(sum == vt[i]){
                re+=2;
                l++;
                r--;
            }else if(sum < vt[r]){
                l++;
            }else{
                r--;
            }
        }
    }
    cout << re;



    return 0;
}