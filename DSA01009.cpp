#include <bits/stdc++.h>
using namespace std;
bool check(string s, int n)
{
    s = 'B' + s + 'B';
    for (int i = 0; i < s.size() - n - 1; i++)
    {
        if (s[i] == 'B' && s[i + n + 1] == 'B')
        {
            int d = 0;
            for (int j = i + 1; j <= i + n; j++)
            {
                if (s[j] == 'A')
                    d++;
            }
            if (d == n)
                return 1;
        }
    }
    return 0;
}
int main()
{
    int n, k;
    cin >> n >> k;
    string a;
    queue<string> q;
    for (int i = 0; i < n; i++)
        a += 'A';
    while (1)
    {
        if (check(a, k))
            q.push(a);
        int ok = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 'A')
            {
                ok = 1;
                a[i] = 'B';
                for (int j = i + 1; j < n; j++)
                    a[j] = 'A';
                break;
            }
        }
        if (ok == 0)
            break;
    }
    cout << q.size() << endl;
    while (q.size())
    {
        cout << q.front() << endl;
        q.pop();
    }
}
