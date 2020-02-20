#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstring>
using namespace std;
pair<int, int>p[5001];
int a[5001];
int INF = 0x7ffffff7;
int cmp(pair<int, int>f,pair<int, int>a)
{
    return f < a;
}
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n;i++)
            cin >> p[i].first >> p[i].second;
        sort(p, p + n, cmp);
        for (int i=0;i<=n;i++)
            a[i] = INF;
        for (int i = 0; i < n;i++)
            *lower_bound(a, a + n + 1, -p[i].second) = -p[i].second;
        cout << distance(a, lower_bound(a, a + n + 1, INF)) << endl;
    }
    system("pause");
    return 0;
}