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
struct STRING
{
    char c;
    STRING *FROM;
    STRING *NEXT;
};

int main()
{
    fast_io();
    int n;
    cin >> n;
    char c;
    STRING ch[n + 2];
    int i = 1;
    while (cin >> c)
    {
        ch[i].c = c;
        ch[i - 1].NEXT = &ch[i];
        ch[i].FROM = &ch[i - 1];
        i++;
        if (i == n + 1)
            break;
    }
    ch[n].NEXT = &ch[n + 1];
    ch[0].FROM = NULL;
    ch[n + 1].FROM = &ch[n];
    ch[n + 1].NEXT = NULL;

    bool found = false;
    do
    {
        STRING *p = &ch[0];
        found = false;
        int cnt = 0;
        while (p->NEXT != NULL)
        {
            if (p->c == 'f')
                cnt = 1;
            else if (p->c == 'o' && cnt == 1)
                cnt = 2;
            else if (p->c == 'x' && cnt == 2)
            {
                cnt = 0;
                found = true;
                (p->FROM->FROM->FROM)->NEXT = p->NEXT;
            }
            else
                cnt = 0;
            p = p->NEXT;
        }
    } while (found);
    ll ans = 0;
    STRING *p = &ch[0];
    while (p->NEXT != NULL)
    {
        ans++;
        p = p->NEXT;
    }
    cout << ans - 1;
    return 0;
}