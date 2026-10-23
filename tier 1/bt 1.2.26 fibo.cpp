#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(long long n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Function to find Fibonacci primes up to n
void solve(long long n) {
    long long f1 = 1, f2 = 1;

    // Print Fibonacci primes
    if (isPrime(f1) && f1 <= n) cout << f1 << "\n";
    if (isPrime(f2) && f2 <= n) cout << f2 << "\n";

    while (true) {
        long long fn = f1 + f2;
        if (fn > n) break;
        if (isPrime(fn)) cout << fn << "\n";
        f1 = f2;
        f2 = fn;
    }
}

int main() {
    long long n;
    cin >> n;
    if (n < 1) return 1;
    solve(n);
    return 0;
}
