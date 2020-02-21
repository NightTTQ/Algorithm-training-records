#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int t1, t2, t3;
    cin >> t1 >> t2 >> t3;
    int p1=0, p2=0;
    char x;
    if(a>b)
    {
        if(t1==0||t2==0||t3==0)
        {
            x = 'a';
            p1 = a;
            if(t1==0)
                p2++;
            if(t2==0)
                p2++;
            if(t3==0)
                p2++;
        }
        else
        {
            x = 'b';
            p1 = b;
            if(t1==1)
                p2++;
            if(t2==1)
                p2++;
            if(t3==1)
                p2++;
        } 
    }
    if(b>a)
    {
        if(t1==1||t2==1||t3==1)
        {
            x = 'b';
            p1 = b;
            if(t1==1)
                p2++;
            if(t2==1)
                p2++;
            if(t3==1)
                p2++;
        }
        else
        {
            x = 'a';
            p1 = a;
            if(t1==0)
                p2++;
            if(t2==0)
                p2++;
            if(t3==0)
                p2++;
        }
    }
    
        
        
    cout << "The winner is " << x << ": " << p1 << " + " << p2;

    system("pause");
    return 0;
}