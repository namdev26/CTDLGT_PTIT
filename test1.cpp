#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    iota(a, a + n, 1);
    int k =1;
    do {
        cout << k << ": " ;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
        k++;
    } 
    while (next_permutation(a, a + n));
}