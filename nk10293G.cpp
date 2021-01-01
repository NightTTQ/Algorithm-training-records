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

int main()
{
    fast_io();
    string s[5];
    string name[5] = {"qh", "sh", "hl", "xx", "kt"};
    int maxtol = 0;
    vector<int> peo;
    for (int i = 0; i < 5; i++)
        cin >> s[i];
    for (int i = 0; i < 5; i++)
    {
        int a = 0, b = 0;
        for (int j = 0; j < s[i].length(); j++)
        {
            string ss;

            ss = s[i].substr(j, 7);
            if (ss == "buhuiba")
                a++;
            ss = s[i].substr(j, 6);
            if (ss == "jiuzhe")
                b++;
        }
        cout << name[i] << " " << a << " " << b << "\n";
        if (a + b > maxtol)
        {
            maxtol = a + b;
            peo.clear();
            peo.push_back(i);
        }
        else if (a + b == maxtol)
        {
            peo.push_back(i);
        }
    }
    if (peo.size() > 1)
        cout << "yygqdss";
    else
        cout << name[peo[0]];
    return 0;
}