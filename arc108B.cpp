//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'f')
            cnt = 1;
        else if (s[i] == 'o' && cnt == 1)
            cnt = 2;
        else if (s[i] == 'x' && cnt == 2)
        {
            cnt = 0;
            s.erase(i - 2, 3);
            i = i - 5;
        }
        else
            cnt = 0;
        if (i < -1)
            i = -1;
    }

    cout << s.length();
    return 0;
}