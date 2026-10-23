#include <bits/stdc++.h>
using namespace std;
void xm(int a[], int n) {
    for (int i = 0; i < n; i++) cout<<a[i];
}
int main() {
    int a;cin>>a;
    if (a <= 0) { 
        cout << "Kich thuoc mang phai lon hon 0!" << endl;
        return 1;
    }
    vector<int> mg(a);
    for (int i = 0; i < a; i++) {
        cin >> mg[i];
    }
    cout << "Mang ban dau: ";
    xm(mg.data(), a);

    sort(mg.begin(), mg.end());
    cout << "\nMang sau khi sap xep tang dan: ";
    xm(mg.data(), a);

    sort(mg.begin(), mg.end(), greater<int>());
    cout << "\nMang sau khi sap xep giam dan: ";
    xm(mg.data(), a);

    cout << endl;
    return 0;
}