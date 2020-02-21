#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <map>
using namespace std;
int maxm=0,ans[101][11][11];
int main()
{
    int n,t[101];
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> t[i];
        maxm = max(maxm, t[i]);
    }
    int last = -1,poi=0;
    for (int i = 0; i < maxm;i++)
        for (int j = 0; j < 10;j++)
            for (int k = 0; k < n;k++)
            {
                if(t[k]<=i)
                    continue;
                else
                {
                    if(last==k)
                        poi += 2;
                    else
                        poi++;
                }
                ans[k][i][j] = poi;
                last = k;
            }
    for (int i = 0; i < n;i++)
    {
        cout << "#" << i + 1 << endl;
        for (int j = 0; j < t[i];j++)
        {
            for (int k = 0; k < 10;k++)
            {
                if(k)
                    cout << " ";
                cout << ans[i][j][k];
            }
            cout << endl;
        }   
    }
    system("pause");
    return 0;
}