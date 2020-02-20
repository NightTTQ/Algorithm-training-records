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
        int sum = 0, p = 0, m = 0, z = 0, ans = 0;
        cin >> n;
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
            sum += a[i];
            if(a[i]>0)
                p++;
            else if(a[i]<0)
                m++;
        }
        z = n - p - m;
        //sort(a, a + n);
        if((sum+z)==0)
            ans = z + 1;
        else
        {
            ans = z;
        }
        cout << ans << endl;

    }
    system("pause");
    return 0;
}