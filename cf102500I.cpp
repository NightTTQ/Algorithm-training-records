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
    int n;
    cin >> n;
    ll card[n];
    for (int i = 0; i < n; i++)
        cin >> card[i];
    int l = 0, r = n - 1;
    for (int i = 1; i < n; i++)
    {
        if (card[i] < card[i - 1])
        {
            l = i - 1;
            while (l && card[l] == card[l - 1])
                l--;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (card[i] < card[i - 1])
        {
            r = i;
            while (r < n - 1 && card[r] == card[r + 1])
                r++;
            break;
        }
    }
    if (l <= r)
        reverse(card + l, card + r + 1);
    for (int i = 0; i < n - 1; i++)
        if (card[i + 1] < card[i])
        {
            cout << "impossible\n";
            return 0;
        }
    cout << ++l << " " << ++r;
    return 0;
}