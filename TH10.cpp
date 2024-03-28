#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

vector<vector<long long>> MaTran(const vector<vector<long long>>& a, const vector<vector<long long>>& b, int n) {
    vector<vector<long long>> ketQua(n, vector<long long>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                ketQua[i][j] = (ketQua[i][j] + a[i][k] * b[k][j]) % MOD;
            }
        }
    }
    return ketQua;
}
vector<vector<long long>> luyThua(const vector<vector<long long>>& a, int n, long long k) {
    if (k == 1) {
        return a;
    }
    if (k % 2 == 0) {
        vector<vector<long long>> ok = luyThua(a, n, k / 2);
        return MaTran(ok, ok, n);
    } else {
        vector<vector<long long>> ok = luyThua(a, n, k / 2);
        vector<vector<long long>> tongAll = MaTran(ok, ok, n);
        return MaTran(tongAll, a, n);
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        long long K;
        cin >> N >> K;

        vector<vector<long long>> a(N, vector<long long>(N));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> a[i][j];
            }
        }

        vector<vector<long long>> X = luyThua(a, N, K);

        long long tmp = 0;
        for (int j = 0; j < N; ++j) {
            tmp = (tmp + X[0][j]) % MOD;
        }

        cout << tmp << endl;
    }

    return 0;
}
