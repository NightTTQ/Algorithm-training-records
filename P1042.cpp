#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    char g[62501];
    int i = 1;
    while(cin >> g[i]&&g[i]!='E')
        i++;
    if(g[1]=='E')
    {
        cout << "0:0" << endl
             << endl
             << "0:0" << endl;
        return 0;
    }
        
    int a = 0, b = 0;
    for(int j=1;j<=i;j++)
    {
        if(g[j]=='W')
        {
            a++;
            if(a>=11||b>=11)
                if(abs(a-b)>=2)
                {
                    cout << a << ":" << b << endl;
                    a = 0;
                    b = 0;
                }
            
        }
        if(g[j]=='L')
        {
            b++;
            if(a>=11||b>=11)
                if(abs(a-b)>=2)
                {
                    cout << a << ":" << b << endl;
                    a = 0;
                    b = 0;
                }
        }
    }
    if(a!=0||b!=0)
        cout << a << ":" << b << endl;
    if(a==0&&b==0)
        cout << a << ":" << b << endl;
    cout << endl;
    a = 0;
    b = 0;
    for(int j=1;j<=i;j++)
    {
        if(g[j]=='W')
        {
            a++;
            if(a>=21||b>=21)
                if(abs(a-b)>=2)
                {
                    cout << a << ":" << b << endl;
                    a = 0;
                    b = 0;
                }
        }
        if(g[j]=='L')
        {
            b++;
            if(a>=21||b>=21)
                if(abs(a-b)>=2)
                {
                    cout << a << ":" << b << endl;
                    a = 0;
                    b = 0;
                }
        }
    }
    if(a!=0||b!=0)
        cout << a << ":" << b << endl;
    if(a==0&&b==0)
        cout << a << ":" << b << endl;
    system("pause");
    return 0;
}