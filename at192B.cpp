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
    string s;
    cin >> s;
    bool flag=true;
    for (int i = 0; i < s.length(); i++)
        if ((i+1) % 2 == 1 && 'A' <= s[i] && s[i] <= 'Z')
        {
            flag = false;
            break;
        }
        else if ((i+1) % 2 == 0 && 'a' <= s[i] && s[i] <= 'z')
        {
            flag = false;
            break;
        }
    if (flag)
        cout << "Yes";
    else
        cout<< "No";

    return 0;
}