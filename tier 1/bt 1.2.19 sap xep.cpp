#include <iostream>
#include <algorithm>
using namespace std;

bool customSort(int a, int b) {
    if ((a % 2 == 0) && (b % 2 != 0)) return true;
    if ((a % 2 != 0) && (b % 2 == 0)) return false;
    return a < b;
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n, customSort);

    for (int x : arr) cout << x << " ";
    return 0;
}
