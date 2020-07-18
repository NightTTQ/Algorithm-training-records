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
    int T;
    string s;
    cin >> T;
    getchar();
    while (T--)
    {
        getline(cin, s);
        if (s == "left Walk")
            cout << "left\n";
        if (s == "right Walk")
            cout << "right\n";
        if (s == "QuickDrop")
            cout << "down\n";
        if (s == "Squat")
            cout << "down\n";
        if (s == "Grasp")
            cout << "Z\n";
        if (s == "Jump")
            cout << "C\n";
        if (s == "leftup Dash")
            cout << "left up X\n";

        if (s == "up Dash")
            cout << "up X\n";

        if (s == "rightup Dash")
            cout << "right up X\n";

        if (s == "left Dash")
            cout << "left X\n";

        if (s == "right Dash")
            cout << "right X\n";

        if (s == "leftdown Dash")
            cout << "left down X\n";

        if (s == "down Dash")
            cout << "down X\n";

        if (s == "rightdown Dash")
            cout << "right down X\n";

        // cout << s;
    }
    return 0;
}