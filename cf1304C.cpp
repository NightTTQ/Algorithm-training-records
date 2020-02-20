#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
using namespace std;
struct p
{
    int hi, lo, time;
} ren[101];
int cmp(p f,p a)
{
    return f.time < a.time;
}
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, m, now = 0;
        cin >> n >> m;
        for (int i = 0; i < n;i++)
            cin >> ren[i].time >> ren[i].lo >> ren[i].hi;
        sort(ren, ren + n, cmp);
        for (int i = 0; i < n;i++)
        {
            if(m+(ren[i].time-now)>=ren[i].lo)
            {
                now += abs(ren[i].lo - m);
                m = ren[i].lo;
            }
            else if (m-(ren[i].time-now)<=ren[i].hi)
            {
                now += abs(ren[i].hi - m);
                m = ren[i].hi;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
        }
        cout << "YES" << endl;
    }

    system("pause");
    return 0;
}