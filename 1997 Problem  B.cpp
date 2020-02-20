#include <iostream>
#include <cstdio>
int l, r, m = 0, t = 0;
using namespace std;
inline int search(int n)
{
    if(n!=1)
    {
        if(n%2==0)
        {
            t++;
            search(n / 2);
        }
        else
        {
            t++;
            search(n * 3 + 1);
        }
    }
    return 0;
}
int main()
{
    int num = 0;
    while(cin>>l>>r)
    {
        num++;
        for (int i = l; i <= r;i++)
            {
                search(i);
                if(t>m)
                    m = t;
                t = 0;
            }
        cout << "Case #" << num << ": " << m;
        m = 0;
        t = 0;
    }   
}