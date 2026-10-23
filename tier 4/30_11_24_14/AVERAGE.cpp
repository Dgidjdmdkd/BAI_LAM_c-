#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
//#pragma GCC optimize ("unroll-loop")
#define VO "AVERAGE"
#define el "\n"
using namespace std;

int main(){

    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(VO".INP","r",stdin);
    freopen(VO".OUT","w",stdout);

    int n,k;
    double re = 0;
    cin >> n >> k;
    vector<int>vt(n+1),pre(n+ 1);
    for(int i = 1 ; i <= n ; i++){
        cin >> vt[i];
        pre[i] = pre[i - 1] + vt[i];
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = i + k - 1; j <= n ; j ++){
            double tm = (double) (pre[j] - pre[i - 1]) / (j - i + 1);
            re = max(tm ,re);
        }
    }
    cout << fixed << setprecision(3);
    cout << re << el;

    /*
    int n,k;
    cin >> n >> k;
    vector<int> vt (n+1),pre(n + 1,0);
    double re = 0;
    for(int i = 1 ; i <= n ; i++){
        cin >> vt[i];
        pre[i] = pre[i - 1] + vt[i];
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = i + k ; j <= n ; j++){
            int tm = pre[j] - pre[i - 1];
            if(tm % (j - i - 1) != 0){
                double ts = static_cast<double> (tm) / (j - i - 1);
                re = max(ts,re);
            }else{
                re = max(re,(double)tm/(j - i - 1));
            }
        }
    }
    cout << re;
*/
	return 0;
}
