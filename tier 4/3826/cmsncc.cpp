#pragma GCC optimize ("Ofast")
#include <iostream>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>
#include <unordered_map>

#define bl "cmcc"
using namespace std;

// ======
string removeVietnameseAccents(const string& input) {
    static const unordered_map<string, char> accentMap = {
        {"à",'a'},{"á",'a'},{"ạ",'a'},{"ả",'a'},{"ã",'a'},
        {"â",'a'},{"ầ",'a'},{"ấ",'a'},{"ậ",'a'},{"ẩ",'a'},{"ẫ",'a'},
        {"ă",'a'},{"ằ",'a'},{"ắ",'a'},{"ặ",'a'},{"ẳ",'a'},{"ẵ",'a'},
        {"è",'e'},{"é",'e'},{"ẹ",'e'},{"ẻ",'e'},{"ẽ",'e'},
        {"ê",'e'},{"ề",'e'},{"ế",'e'},{"ệ",'e'},{"ể",'e'},{"ễ",'e'},
        {"ì",'i'},{"í",'i'},{"ị",'i'},{"ỉ",'i'},{"ĩ",'i'},
        {"ò",'o'},{"ó",'o'},{"ọ",'o'},{"ỏ",'o'},{"õ",'o'},
        {"ô",'o'},{"ồ",'o'},{"ố",'o'},{"ộ",'o'},{"ổ",'o'},{"ỗ",'o'},
        {"ơ",'o'},{"ờ",'o'},{"ớ",'o'},{"ợ",'o'},{"ở",'o'},{"ỡ",'o'},
        {"ù",'u'},{"ú",'u'},{"ụ",'u'},{"ủ",'u'},{"ũ",'u'},
        {"ư",'u'},{"ừ",'u'},{"ứ",'u'},{"ự",'u'},{"ử",'u'},{"ữ",'u'},
        {"ỳ",'y'},{"ý",'y'},{"ỵ",'y'},{"ỷ",'y'},{"ỹ",'y'},
        {"đ",'d'},
        {"À",'A'},{"Á",'A'},{"Ạ",'A'},{"Ả",'A'},{"Ã",'A'},
        {"Â",'A'},{"Ầ",'A'},{"Ấ",'A'},{"Ậ",'A'},{"Ẩ",'A'},{"Ẫ",'A'},
        {"Ă",'A'},{"Ằ",'A'},{"Ắ",'A'},{"Ặ",'A'},{"Ẳ",'A'},{"Ẵ",'A'},
        {"È",'E'},{"É",'E'},{"Ẹ",'E'},{"Ẻ",'E'},{"Ẽ",'E'},
        {"Ê",'E'},{"Ề",'E'},{"Ế",'E'},{"Ệ",'E'},{"Ể",'E'},{"Ễ",'E'},
        {"Ì",'I'},{"Í",'I'},{"Ị",'I'},{"Ỉ",'I'},{"Ĩ",'I'},
        {"Ò",'O'},{"Ó",'O'},{"Ọ",'O'},{"Ỏ",'O'},{"Õ",'O'},
        {"Ô",'O'},{"Ồ",'O'},{"Ố",'O'},{"Ộ",'O'},{"Ổ",'O'},{"Ỗ",'O'},
        {"Ơ",'O'},{"Ờ",'O'},{"Ớ",'O'},{"Ợ",'O'},{"Ở",'O'},{"Ỡ",'O'},
        {"Ù",'U'},{"Ú",'U'},{"Ụ",'U'},{"Ủ",'U'},{"Ũ",'U'},
        {"Ư",'U'},{"Ừ",'U'},{"Ứ",'U'},{"Ự",'U'},{"Ử",'U'},{"Ữ",'U'},
        {"Ỳ",'Y'},{"Ý",'Y'},{"Ỵ",'Y'},{"Ỷ",'Y'},{"Ỹ",'Y'},
        {"Đ",'D'}
    };

    string result;
    size_t i = 0;
    while (i < input.size()) {
        unsigned char c = input[i];
        int len = 1;
        if ((c & 0x80) == 0x00) len = 1;
        else if ((c & 0xE0) == 0xC0) len = 2;
        else if ((c & 0xF0) == 0xE0) len = 3;
        else if ((c & 0xF8) == 0xF0) len = 4;

        string chunk = input.substr(i, len);
        auto it = accentMap.find(chunk);
        if (it != accentMap.end()) {
            result += it->second;
        } else if (len == 1) {
            result += chunk;
        }
        //UTF-8
        i += len;
    }
    return result;
}


string caesarShift(const string& text, int shift) {
    string result = text;
    for (char &c : result) {
        if (c >= 'a' && c <= 'z') {
            c = (c - 'a' + shift + 260) % 26 + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            c = (c - 'A' + shift + 260) % 26 + 'A';
        }
    }
    return result;
}

void printSlowly(const string& text, int delay_ms = 35) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay_ms));
    }
    cout << endl;
}

void runEncrypt() {
    cout << "Nhap noi dung can ma hoa, ket thuc bang dong chi co '.' roi Enter:\n";
    string full, line;
    while (getline(cin, line)) {
        if (line == ".") break;
        full += line + "\n";
    }

    string noAccent = removeVietnameseAccents(full);
    string encrypted = caesarShift(noAccent, 8);

    ofstream fout(string(bl) + ".inp");
    if (!fout) {
        cerr << "Loi: khong the tao file " << bl << ".inp!\n";
        return;
    }
    fout << encrypted;
    fout.close();

    cout << "\nDa tao file " << bl << ".inp thanh cong.\n";
    cout << "Noi dung khong dau: \n" << noAccent << "\n";
    cout << "Noi dung da ma hoa: \n" << encrypted << "\n";
}

void runDecrypt() {
    if (freopen(string(string(bl) + ".inp").c_str(), "r", stdin) == nullptr) {
        cerr << "Loi: Khong tim thay file " << bl << ".inp!" << endl;
        return;
    }

    string encryptedText = "";
    string line;
    while (getline(cin, line)) {
        encryptedText += line + "\n";
    }

    string decryptedText = caesarShift(encryptedText, -8);

    cout << "=== DANG GIAI MA THONG DIEP... ===\n\n";
    this_thread::sleep_for(chrono::seconds(1));

    printSlowly(decryptedText, 35);
}

int main(int argc, char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Run: ./cm encrypt   
    // Run: ./cm           
    if (argc > 1 && string(argv[1]) == "encrypt") {
        runEncrypt();
    } else {
        runDecrypt();
    }

    return 0;
}