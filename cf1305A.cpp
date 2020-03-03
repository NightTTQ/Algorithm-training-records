#include <bits/stdc++.h>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    int n,ans[102];
    int a[102], b[102];
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 0; i < n;i++)
            cin >> a[i];
        for (int i = 0; i < n;i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        for (int i = 0; i < n;i++)
            cout << a[i]<<" ";
        cout << endl;
        for (int i = 0; i < n;i++)
            cout << b[i]<<" ";
        cout << endl;

    }
    return 0;
}