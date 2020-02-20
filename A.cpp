#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int h, n, w;
    int t = 0;
    cin >> h >> w >> n;
    if(n==h*w)
    {
        if(h>w)
        {
            cout << w;
            return 0;
        }
        else
        {
            cout << h;
            return 0;
        }
    }
    else if(h<w)
    {
        t = n % w;
        if(t==0)
        {
            cout << n / w;
            return 0;
        }
        else
        {
            cout << n / w + 1;
            return 0;
        }
    }
    else
    {
        t = n % h;
        if(t==0)
        {
            cout << n / h;
            return 0;
        }
        else
        {
            cout << n / h + 1;
            return 0;
        }
    }
    return 0;
}