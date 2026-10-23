#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;
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

// Hàm tự viết: Tìm vị trí của X trong mảng tăng dần
int binarySearch(vector<int>& arr, int X) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == X) return mid;       // Tìm thấy
        if (arr[mid] < X) left = mid + 1;    // X nằm bên phải
        else right = mid - 1;                // X nằm bên trái
    }
    return -1; // Không tìm thấy
}

// CÁCH DÙNG STL CÓ SẴN (Khuyên dùng trong phòng thi cho nhanh) [cite: 3, 4]
// bool found = binary_search(arr.begin(), arr.end(), X);
// int vi_tri_dau_tien_lon_hon_bang_X = lower_bound(arr.begin(), arr.end(), X) - arr.begin();

// Ví dụ: Sinh tất cả các dãy nhị phân có độ dài N
int N;
vector<int> a; // Mảng lưu cấu hình hiện tại

void Try(int i) {
    for (int j = 0; j <= 1; j++) {
        a[i] = j; // Thử gán giá trị j cho vị trí i
        if (i == N - 1) {
            // Đã điền đủ N vị trí, in cấu hình ra
            for (int k = 0; k < N; k++) cout << a[k];
            cout << "\n";
        } else {
            // Chưa đủ, gọi đệ quy điền tiếp vị trí i+1
            Try(i + 1);
        }
    }
}
// Trong hàm main gọi: a.resize(N); Try(0);

int main() {
    // Tối ưu hóa I/O
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    cout.tie(nullptr);
    
    // Đọc ghi file theo yêu cầu đề bài
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.OUT", "w", stdout);
    
    // Code logic
    
    return 0;
}