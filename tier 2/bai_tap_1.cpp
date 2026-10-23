#include <bits/stdc++.h>
using namespace std;

void pl (){
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}
int main(){
    pl();
    int a;
    cout << "hãy nhập số tiền :";
    cin >> a;
    float te = 0,lut = 0;
    if (a < 0){
        cout << "số tiền không hợp lệ" << endl;
        return 1;
    } else if (a == 0){
        cout << "số tiền là 0" << endl;
        return 1;
    } else {
        te = a / 16;
        lut = a / 14;
        cout << "với tiền " << a << " bạn có thể mua được " << te << " kg" << endl;
        cout << "với tiền " << a << " bạn có thể mua được " << lut << " kg" << endl;
    }
    return 0;
}