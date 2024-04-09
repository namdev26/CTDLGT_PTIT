#include <iostream>
#include <vector>

using namespace std;

const int MOD = 123456789;

int countSequences(int n) {
    vector<int> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            dp[j] = (dp[j] + dp[j - i]) % MOD;
        }
    }

    return dp[n];
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        cout << countSequences(n) << endl;
    }

    return 0;
}
