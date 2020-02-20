#include <iostream>
#include <cstdio>
int d[21], k[21], ans[3];
using namespace std;
int main()
{
    string s[21];
    int n, m, t, max, a1, a2, a3;
    while(cin>>n>>m)
    {
        max = 0;
        t = 0;
        for (int i = 1; i <= n; i++)
            cin >> s[i] >> d[i] >> k[i];
        max=d[1];
        for (int i = 1; i <= n;i++)
        {
            if(d[i]>max)
        }

            for (int a = 1; a <= n - 2; a++)
                for (int b = 2; b <= n - 1; b++)
                    for (int c = 3; c <= n; c++)
                    {
                        if (k[a] + k[b] + k[c] > m)
                            continue;
                        else
                        {
                            t = d[a] + d[b] + d[c];
                            if (t > max)
                            {
                                max = t;
                                ans[1] = a;
                                ans[2] = b;
                                ans[3] = c;
                            }
                        }
                    }
        cout << max << endl;
        a1 = 1;
        a3 = 1;
        for (int i = 1; i <= 3;i++)
        {
            if(ans[i]>ans[a1])
                a1 = i;
            if(ans[i]<ans[a3])
                a3 = i;
        }
        for (int i = 1; i <= 3;i++)
        {
            if(ans[i]!=ans[a1]&&ans[i]!=ans[a3])
                a2 = i;
        }
        cout << s[ans[a1]] << endl
             << s[ans[a2]] << endl
             << s[ans[a3]];
    }
    return 0;
}