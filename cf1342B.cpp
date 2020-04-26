//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
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
    int T;
    cin >> T;
    while (T--)
    {
        string t;
        cin >> t;
        bool h0 = false, h1 = false;
        for (auto i : t)
        {
            if (i == '0')
                h0 = true;
            if (i == '1')
                h1 = true;
            if (h0 && h1)
                break;
        }
        if (!h0)
        {
            cout << t << "\n";
            continue;
        }
        else if (!h1)
        {
            cout << t << "\n";
            continue;
        }
        else
            for (ll i = 0; i < t.length(); i++)
            {
                if (t[i] == t[i + 1])
                {
                    if (t[i] == '0')
                    {
                        cout << t[i] << "1";
                    }

                    else if (t[i] == '1')
                    {
                        cout << t[i] << "0";
                    }
                }
                else
                    cout << t[i];
            }
        cout << "\n";
    }
    return 0;
}