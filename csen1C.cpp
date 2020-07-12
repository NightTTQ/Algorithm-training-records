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
map<string, int> m;

void Permutation(char* pStr, char* pBegin)
{
    if (*pBegin == '\0')
    {
        m[pStr] = 1;
        // cout << pStr << "\n";
    }
    else
    {
        for (char* pCh = pBegin; *pCh != '\0'; ++pCh)
        {
            char temp = *pCh;
            *pCh = *pBegin;
            *pBegin = temp;

            Permutation(pStr, pBegin + 1);

            if (*pCh == *pBegin)
                continue;
            temp = *pCh;
            *pCh = *pBegin;
            *pBegin = temp;
        }
    }
}

int main()
{
    fast_io();
    string s, t;
    string temp;
    int ans = 0;
    cin >> s >> t;
    Permutation(&s[0], &s[0]);
    for (int i = 0; i < t.length() - s.length() + 1; i++)
    {
        temp = t.substr(i, s.length());
        // cout << temp << endl;
        if (m[temp])
        {
            ans++;
            m[temp] = 0;
        }
    }
    cout << ans;
    return 0;
}