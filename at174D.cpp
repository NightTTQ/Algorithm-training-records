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
    int n;
    int cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0, j = n - 1; i < j;)
    {
        if (s[i] != 'W')
        {
            i++;
            continue;
        }
        if (s[j] != 'R')
        {
            j--;
            continue;
        }
        i++, j--, cnt++;
    }
    cout << cnt;
    return 0;
}
