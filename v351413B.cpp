#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

struct d
{
    int begin;
    int end;
}tv[101];

int cmp(d f,d a)
{
    if(f.end==a.end)
        return f.begin>a.begin;
    return f.end<a.end;
}

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        for(int i=0;i<n;i++)
            cin>>tv[i].begin>>tv[i].end;
        sort(tv, tv+n,cmp);
        int ans=1;
        int nowend=tv[0].end;
        for(int i=1;i<n;i++)
        {
            if(tv[i].begin>=nowend)
            {
                ans++;
                nowend=tv[i].end;
            }
        }
        cout<<ans<<endl;
    }
    system("pause");
    return 0;
}