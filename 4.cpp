#include <bits/stdc++.h>
using namespace std;

void print_config(int n, vector<char> &config) {
    for (int i = 0; i < n; i++) {
        cout << config[i];
    }
    cout << endl;
}

void solve(int n, char c) {
    if (n < 5) {
        return;
    }
    vector<char> config(n, '.');
    for (int i = 0; i < n - 4; i++) {
        config[i] = c;
        if (config[i] == config[i + 1] && config[i] == config[i + 2] &&
            config[i] == config[i + 3] && config[i] == config[i + 4]) {
            print_config(n, config);
        }
        config[i] = '.';
    }
    for (int i = 0; i < n; i++) {
        config[i] = c;
        solve(n - 1, c);
        config[i] = '.';
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        solve(n, c);
    }
    return 0;
}