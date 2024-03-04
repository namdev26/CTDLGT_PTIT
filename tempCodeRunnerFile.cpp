#include <iostream>
#include <algorithm>

// Hàm đếm số cặp (i, j) sao cho A[i] + A[j] = K
int countPairsWithSumK(int a[], int n, int k) {
    int count = 0;

    // Sắp xếp dãy số để sử dụng con trỏ
    std::sort(a, a + n);

    for (int i = 0; i < n - 1; i++) {
        int left = i + 1;  // Bắt đầu từ phần tử sau a[i]
        int right = n - 1;

        // Duyệt dãy số với hai con trỏ
        while (left < right) {
            int currentSum = a[left] + a[right];

            if (currentSum == k) {
                count++;
                left++;

                // Kiểm tra phần tử trùng nhau ở bên trái
                while (left < right && a[left] == a[left - 1]) {
                    left++;
                }

                right--;
                // Kiểm tra phần tử trùng nhau ở bên phải
                while (left < right && a[right] == a[right + 1]) {
                    right--;
                }
            } else if (currentSum < k) {
                left++;
            } else {
                right--;
            }
        }

        // Kiểm tra phần tử trùng nhau ở a[i]
        while (i < n - 1 && a[i] == a[i + 1]) {
            i++;
        }
    }

    return count;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, k;
        std::cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }

        int result = countPairsWithSumK(a, n, k);

        std::cout << "So luong cap (i, j) sao cho A[i] + A[j] = K la: " << result << std::endl;
    }

    return 0;
}
