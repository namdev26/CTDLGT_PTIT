#include <iostream>
using namespace std;

const int mod = 123456789;

long long poww(long long n, long long k) {
    cout << "Debug: n = " << n << ", k = " << k << endl;
    if (k == 1)
        return n;
    long long x = poww(n, k / 2);
    cout << "Debug: x = " << x << endl;
    if (k % 2 == 0) {
        cout << "Debug: k is even" << endl;
        long long result = (x * x) % mod;
        cout << "Debug: result = " << result << endl;
        return result;
    } else {
        cout << "Debug: k is odd" << endl;
        long long result = (((x * x) % mod) * n) % mod;
        cout << "Debug: result = " << result << endl;
        return result;
    }
}

int main() {
    long long n, k;
    cout << "Enter n and k: ";
    cin >> n >> k;
    cout << "Result: " << poww(n, k) << endl;
    return 0;
}
