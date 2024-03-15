#include <iostream>
#include <unordered_set>

using namespace std;

int countDifferentElements(int arr1[], int arr2[], int size1, int size2) {
    unordered_set<int> uniqueElements;
    
    // Thêm tất cả các phần tử của mảng thứ nhất vào tập hợp
    for (int i = 0; i < size1; ++i) {
        uniqueElements.insert(arr1[i]);
    }
    
    // Loại bỏ các phần tử trùng lặp từ mảng thứ hai và đếm số phần tử còn lại
    int count = 0;
    for (int i = 0; i < size2; ++i) {
        if (uniqueElements.find(arr2[i]) == uniqueElements.end()) {
            ++count;
        }
    }
    
    return count;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int differentCount = countDifferentElements(arr1, arr2, size1, size2);
    
    cout << "Số phần tử khác nhau: " << differentCount << endl;
    
    return 0;
}
