#include <iostream>
using namespace std;

void sinhNhiPhanNguoc(int a[], int n) {
    int i = n - 1;
    while (i >= 0 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i >= 0) {
        a[i] = 1;
        for (int j = i + 1; j < n; j++) {
            a[j] = 0;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sinhNhiPhanNguoc(a, n);
        for (int i = 0; i < n; i++) {
            cout << a[i];
        }
        cout << endl;
    }

    return 0;
}
