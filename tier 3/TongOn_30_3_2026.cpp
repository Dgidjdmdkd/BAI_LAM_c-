#include <bits/stdc++.h>
using namespace std;


// Khai báo biến toàn cục ở đây để mảng tự động gán giá trị 0
const int MAXN = 1e6 + 5;
long long a[MAXN];

vector<bool> isPrime(MAXN, true);
void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < MAXN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

// Ví dụ: Tìm tổng lớn nhất của mảng con liên tiếp có kích thước K
long long maxSlidingWindow(vector<int>& arr, int K) {
    int n = arr.size();
    long long current_sum = 0, max_sum = 0;
    
    // Tính tổng cửa sổ đầu tiên
    for (int i = 0; i < K; i++) {
        current_sum += arr[i];
    }
    max_sum = current_sum;
    
    // Trượt cửa sổ đi từng bước
    for (int i = K; i < n; i++) {
        current_sum = current_sum + arr[i] - arr[i - K];
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

// Ví dụ: Tìm 2 phần tử trong mảng (đã sắp xếp) có tổng bằng X
bool hasPairWithSum(vector<int>& arr, int X) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left < right) {
        int current_sum = arr[left] + arr[right];
        if (current_sum == X) return true;
        if (current_sum < X) left++;      // Tổng nhỏ quá, tăng con trỏ trái
        else right--;                     // Tổng lớn quá, giảm con trỏ phải
    }
    return false;
}


// 1. CHUYỂN ĐỔI CƠ SỐ (Hệ 10 sang Hệ 2)
string decToBin(long long n) {
    if (n == 0) return "0";
    string res = "";
    while (n > 0) { res = char((n % 2) + '0') + res; n /= 2; }
    return res;
}

// 2. SỐ HỌC CƠ BẢN (UCLN, BCNN, Bào hàm loại trừ)
long long gcd(long long a, long long b) { return __gcd(a, b); } // có thể gọi thẳng luôn
long long lcm(long long a, long long b) { return (a / gcd(a, b)) * b; } // cần có thêm gcd
// *Ghi chú Cấp số cộng: S = n * (u1 + un) / 2
// *Ghi chú Cấp số nhân: S = u1 * (q^n - 1) / (q - 1)

// 3. XỬ LÝ SỐ LỚN & ĐỒNG DƯ (Modulo)
const long long MOD = 1e9 + 7;
// Phép nhân an toàn tránh tràn số
long long mulMod(long long a, long long b) {
    return ((a % MOD) * (b % MOD)) % MOD;
}
// Lũy thừa nhị phân (a^b % MOD)
long long binPow(long long a, long long b) {
    long long res = 1; a %= MOD;
    while (b > 0) {
        if (b % 2 == 1) res = (res * a) % MOD;
        a = (a * a) % MOD; b /= 2;
    }
    return res;
}

// 4. KIỂM TRA SỐ ĐẶC BIỆT
bool isPerfectSquare(long long n) {
    long long sq = sqrt(n);
    return sq * sq == n;
}
bool isPerfectNumber(long long n) {
    if (n <= 1) return false;
    long long sum = 1;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) sum += n / i;
        }
    }
    return sum == n;
}

// Thư viện cần thiết: <string>, <cctype>
// 1. Mã ASCII cơ bản: '0' = 48, 'A' = 65, 'a' = 97
// 2. Chuyển đổi hoa thường và đếm tần suất
void stringProcessing(string s) {
    int freq[256] = {0}; // Mảng tần suất ký tự
    for (char c : s) {
        if (isalpha(c)) { // Nếu là chữ cái
            c = tolower(c); // Đưa về in thường
            freq[c]++;
        }
    }
}
// 1. SẮP XẾP TÙY CHỈNH (Custom Sort)
struct PhanTu { int giatri, chiso; };
bool cmp(PhanTu a, PhanTu b) {
    if (a.giatri != b.giatri) return a.giatri < b.giatri; // Tăng dần theo giá trị
    return a.chiso > b.chiso; // Cùng giá trị thì giảm dần theo chỉ số
}

// 2. TÌM KIẾM NHỊ PHÂN (Binary Search & Chặt nhị phân)
// Sử dụng hàm STL trên mảng a đã sắp xếp:
// pos1 = lower_bound(a, a + n, X) - a; // Vị trí đầu tiên >= X
// pos2 = upper_bound(a, a + n, X) - a; // Vị trí đầu tiên > X

// 3. QUAY LUI & NHÁNH CẬN (Backtracking & Branch and Bound)
int x[100], n, best_cost = 2e9, current_cost = 0,test; // lưu ý test chỉ để probs == 0
void Try(int i) {
    for (int j = 0; j <= 1; j++) {
        x[i] = j;
        current_cost += /* chi phí nào đó */ test;
        
        // Nhánh cận: Nếu chi phí hiện tại đã lớn hơn kết quả tốt nhất thì cắt tỉa (không đi tiếp)
        if (current_cost < best_cost) { 
            if (i == n) best_cost = min(best_cost, current_cost); // Cập nhật kỉ lục
            else Try(i + 1);
        }
        current_cost -= /* trả lại trạng thái */ test;
    }
}

// 1. MẢNG CỘNG DỒN (Prefix Sum) - Giải quyết truy vấn cực nhanh O(1)
long long P[1000005];
void buildPrefixSum(int a[], int n) {
    P[0] = 0;
    for (int i = 1; i <= n; i++) P[i] = P[i - 1] + a[i];
    // Tổng đoạn [L, R] = P[R] - P[L - 1]
}

// 2. MẢNG 2 CHIỀU: KỸ THUẬT XOAY MẢNG 90 ĐỘ CÙNG CHIỀU KIM ĐỒNG HỒ
// Mảng A kích thước N x N chuyển sang mảng B
void rotateMatrix(int A[100][100], int B[100][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            B[j][n - 1 - i] = A[i][j];
        }
    }
}

// 3. QUY HOẠCH ĐỘNG CƠ BẢN (Dãy con tăng dài nhất - LIS)
int DP_LIS(int a[], int n) {
    vector<int> L(n, 1);
    int res = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) L[i] = max(L[i], L[j] + 1);
        }
        res = max(res, L[i]);
    }
    return res;
}

int main() {
    // Tối ưu I/O (Tuyệt đối không dùng chung cin/cout với scanf/printf)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    
    // Đọc ghi file (Nhớ đổi tên file theo đúng đề bài)
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);
    
    // Code logic chính bắt đầu từ đây...
    
    return 0;
}