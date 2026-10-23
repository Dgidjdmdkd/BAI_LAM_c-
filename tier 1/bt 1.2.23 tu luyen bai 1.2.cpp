#include <bits/stdc++.h>
#include <thread>  
#include <chrono>   

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    freopen("bai1,2.inp", "r", stdin);

    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

this_thread::sleep_for(chrono::milliseconds(2052)); 
    cout << a << endl;

    cout << b << endl;
    this_thread::sleep_for(chrono::milliseconds(3541));  

    cout << c << endl;
    this_thread::sleep_for(chrono::milliseconds(2159)); 

    return 0;
}
