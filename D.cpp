#include <iostream>
#include <cstdio>
#include <cmath>
int a[100], b[100];
int ans = 0;
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n;i++)
        cin >> a[i];
    for (int i = 1; i <= n;i++)
        cin >> b[i];
    if(a[1]>a[2]&&a[1]>b[2])
    if(b[1]>a[2]&&b[1]>b[2])
    {
        cout << "-1";
        return 0;
    }
    if(b[1]>a[1])
        ans++;
    for (int i = 2; i <= n;i++)
    {
        if(a[i]>=a[i-1]||a[i]>=b[i-1])
            continue;
        else if(b[i]>=a[i-1]||b[i]>=b[i-1])
        {
            ans++;
            continue;
        }
        else
        {
            cout << "-1";
            return 0;
        }
    }
    cout << ans;
    system("pause");
    return 0;
}