#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;
struct ma
{
    int a;
    int b;
    bool ava = true;
} road[10001];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m;i++)
        cin >> road[i].a >> road[i].b;
    int k,np;
    cin >> k;
    for (int i = 0; i < k;i++)
    {
        bool flag = true;
        cin >> np;
        int city;
        for (int j = 0; j < np;j++)
        {
            cin >> city;
            for (int l = 0; l < m;l++)
                if(road[l].a==city||road[l].b==city)
                    road[l].ava = false;
        }
        for (int l = 0; l < m;l++)
            if(road[l].ava)
            {
                flag = false;
                break;
            }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        for (int j = 0; j < m;j++)
            road[j].ava = true;
    }
        system("pause");
    return 0;
}