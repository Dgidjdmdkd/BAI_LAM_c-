#include <iostream>
#include <vector>
#include <algorithm> // Thý vi?n cho std::find
using namespace std;

// Hàm nh?p các s? vào vector
void nhapso(vector<int>& a, int g) {
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < g; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
}

// Hàm ki?m tra và xóa ph?n t? trong vector
void ktraso(vector<int>& a, int x) {
    vector<int>::iterator it = find(a.begin(), a.end(), x);
    if (it != a.end()) { // N?u t?m th?y ph?n t?
        a.erase(it);     // Xóa ph?n t? t?i v? trí t?m th?y
        cout << "Da xoa phan tu " << x << " khoi mang.\n";
    } else {
        cout << "Phan tu " << x << " khong duoc tim thay trong mang.\n";
    }
}

// Hàm in m?ng ra màn h?nh
void inmang(const vector<int>& a) {
    cout << "Cac phan tu trong mang: ";
    for ( int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> mang1;
    int n, x;

    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;

    // Nh?p m?ng
    nhapso(mang1, n);

    // Nh?p giá tr? c?n xóa
    cout << "Nhap gia tri can xoa: ";
    cin >> x;

    // Xóa ph?n t? và in k?t qu?
    ktraso(mang1, x);
    inmang(mang1);

    return 0;
}

