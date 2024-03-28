#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[105];
ll F[105][105][105];
int n, k;

void solve()
{
    cin >> n >> k;
    int high = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        high = max(high, a[i]);
    }
    memset(F, 0, sizeof(F));
    for (int i = 1; i <= n; i++)
        F[i][1][a[i]] += 1;
    for (int i = 1; i <= n; i++)
    {
        for (int l = 1; l <= i; l++)
        {
            for (int j = 0; j <= high; j++)
            {
                F[i][l][j] += F[i - 1][l][j];
                if (j < a[i])
                    F[i][l][a[i]] += F[i - 1][l - 1][j];
            }
        }
    }
    ll res = 0;
    for (int j = 0; j <= high; j++)
    {
        res = res + F[n][k][j];
    }
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        solve();
    }
}