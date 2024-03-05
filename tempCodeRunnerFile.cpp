#include <iostream>
#include <vector>

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partition
        int pivot = arr[low];
        int i = low + 1, j = high;
        while (i <= j) {
            while (i <= j && arr[i] <= pivot) {
                i++;
            }
            while (i <= j && arr[j] >= pivot) {
                j--;
            }
            if (i < j) {
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[low], arr[j]);

        // Recursive calls
        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }
}

int main() {
    int n;
    std::cout << "Nhap so phan tu cua day: ";
    std::cin >> n;

    std::vector<int> a(n);
    
    std::cout << "Nhap cac phan tu cua day: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    // Sắp xếp dãy số bằng thuật toán QuickSort
    quickSort(a, 0, n - 1);

    // In dãy số sau khi sắp xếp
    std::cout << "Day so sau khi sap xep: ";
    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << " ";
    }

    return 0;
}
 