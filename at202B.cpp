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
#define mod 1000000007
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    string s;
    string ss;
    cin >> s;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '6')
            ss.append("9");
        else if (s[i] == '9')
            ss.append("6");
        else
            ss.push_back(s[i]);
    }
    cout << ss;
    return 0;
}