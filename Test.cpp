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
#include <string>
#include <vector>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<string> strs;
    string tmp;
    for (auto i : s)
    {
        if (i != '+')
        {
            tmp.push_back(i);
        }
        else
        {
            strs.push_back(tmp);
            tmp.clear();
        }
    }
    strs.push_back(tmp);
    double sum = 0;
    for (auto i : strs)
    {
        string before, after("0");
        bool d = false;
        for (auto j : i)
        {
            if (j == 'd')
            {
                d = true;
                continue;
            }

            if (!d)
            {
                before.push_back(j);
            }
            else
            {
                after.push_back(j);
            }
        }
        double b = atoi(before.c_str()), a = atoi(after.c_str());
        if (a != 0)
        {
            sum += b * (a + 1) / 2;
        }
        else
        {
            sum += b;
        }
    }
    ll ans = sum;
    printf("%ld", ans);
    if (sum != ans)
        cout << ".5";

    return 0;
}