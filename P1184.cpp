#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    int n, m, num=0;
    cin >> n >> m;
    string loc[21],today;
    for (int i = 0; i <= n; i++)
        getline(cin,loc[i]);
    for (int i = 1; i <= m; i++)
    {
        getline(cin,today);
        for (int j = 0; j <= n; j++)
        if(loc[j]==today)
        {
            num++;
            break;
        }
    }
    cout << num;
    system("pause");
    return 0;
}