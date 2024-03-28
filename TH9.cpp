#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> weights(12); // Lưu trữ khối lượng của 12 người chơi
    for (int i = 0; i < 12; ++i) {
        cin >> weights[i];
    }

    sort(weights.begin(), weights.end()); // Sắp xếp khối lượng theo thứ tự tăng dần

    // Tính chênh lệch ít nhất
    int minDifference = (weights[9] + weights[10] + weights[11]) - (weights[0] + weights[1] + weights[2]);

    cout << "Chênh lệch ít nhất: " << minDifference << endl;

    return 0;
}
