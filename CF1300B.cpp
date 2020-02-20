#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int a[101];
    while(T--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < 2*n;i++)
            cin >> a[i];
        sort(a, a+2*n);
        //o = a[n - 1];
        //t = a[n];
        //s = a[n + 1];
        cout << a[n]-a[n-1]<<endl;
    }
    system("pause");
    return 0;
}