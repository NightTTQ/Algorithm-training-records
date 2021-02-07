//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;
struct monster
{
    int a;
    int b;
};

int cmp(monster a, monster b)
{
    return a.a < b.a;
}

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        int A, B;
        int n;
        cin >> A >> B >> n;
        monster monsters[n];
        for (int i = 0; i < n; i++)
            cin >> monsters[i].a;
        for (int i = 0; i < n; i++)
            cin >> monsters[i].b;
        sort(monsters, monsters + n, cmp);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (B <= 0)
            {
                flag = false;
                break;
            }
            // can kill this one
            if (ceil((double)B / monsters[i].a) * A >= monsters[i].b)
            {
                B -= ceil(monsters[i].b / (double)A) * monsters[i].a;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}