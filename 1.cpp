//bai1
#include <bits/stdc++.h>
using namespace std;

int a[100][100], n, u, vs[100], e[100];
void DFS(int u)
{
    int v;
    cout << u << " ";
    vs[u] = 1;
    for (v = 1; v <= n; v++)
        if (vs[v] == 0 && a[u][v] == 1)
        {
            e[v] = u;
            DFS(v);
        }
}