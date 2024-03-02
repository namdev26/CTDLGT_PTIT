#include <iostream>
#include <set>

int main() {
    std::set<int> set1 = {1, 3, 5, 7};
    std::set<int> set2 = {2, 4, 6, 8};

    // Dùng for-each để duyệt qua các phần tử cùng vị trí và in ra màn hình
    auto it1 = set1.begin();
    auto it2 = set2.begin();

    while (it1 != set1.end() && it2 != set2.end()) {
        std::cout << *it1 << " " << *it2 << " ";
        ++it1;
        ++it2;
    }

    return 0;
}
