#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
int ans = 0,nowend;
using namespace std;
struct ro
{
    int x;
    int l;
}robot[100001];

int cmp(ro f,ro a)
{
    if(f.l==a.l)
        return f.x > a.x;
    return f.l < a.l;
}

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n;i++)
    {
        cin >> robot[i].x >> robot[i].l;
        robot[i].x -= robot[i].l;
        robot[i].l = robot[i].x + 2 * robot[i].l;
    }
    sort(robot, robot + n, cmp);
    
    ans = 1;
    nowend = robot[0].l;
    for (int i = 1; i < n;i++)
    {
        if(robot[i].x>=nowend)
        {
            ans++;
            nowend = robot[i].l;
        }
    }
    cout << ans;
    system("pause");
    return 0;
}