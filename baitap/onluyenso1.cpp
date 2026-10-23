#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int so_cac_uoc(int a){
    int cnt = 0;
    for(int i = 1 ; i * i <= a ; i++){
        if(a % i == 0){
            cnt += (i * i == a ? 1 : 2);
        }
    }
    return cnt;
}
string chuyen_thap_phan (int a){
    string res = "";
    while(a > 0){
        res = char('0' + a % 2);
        a /= 2;   
    }
    return res.empty() ? "0" : res;
}
int chuyen_so (string a){
    int sum = 0;
    for(char i : a) sum = sum * 2 + (i - '0');
    return sum;
}
vector<int> sang(int a){
    vector<bool> snt(a + 1, true);
    snt[0] = snt[1] = false;
    for(int i = 2 ; i * i <= a ; i++){
        if(snt[i]){
            for(int j = i * i; j <= a ; j += i){
                snt[j] = false; 
                }
            }
        }
        vector<int> res;
        for(int i = 2; i <= a ; i++){
        if(snt[i]) res.push_back(i);
    }
    return res;
}
bool snt(int a){
    if(a < 0) return false;
    if(a == 2 || a == 3) return true;
    if(a % 2 == 0 || a % 3 == 0) return false;
    for(int i = 5 ; i * i <= a ; i+= 6){
        if(a % i == 0 || a % (i + 2) == 0) return false;
    }
    return true;
}
int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    return 0;
}