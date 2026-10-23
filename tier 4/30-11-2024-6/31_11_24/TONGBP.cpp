#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "TONGBP"
using namespace std;
string co1(string a,string b){
    string re = "";
    int ca=0,i=a.size()-1,j=b.size()-1;
    while(i >=0||j>=0||ca){
        int tmp = ca;
        if(i>=0)tmp+=a[i--]-'0';
        if(j>=0)tmp+=b[j--]-'0';
        ca=tmp/10;
        re+=to_string(tmp%10);
    }
    reverse(re.begin(),re.end());
    return re;
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
    int n;
    cin >> n;
    while(n--){
        ll x;
        string re="0";
        cin >> x;
        for(size_t i = 1 ; i <= x ; i++){
            string tmp1 = to_string(i*i);
            re = co1(tmp1,re);
        }
        cout <<re<<el;
    }
    return 0;
}