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

struct card
{
    char r;
    char b;
};

int cmp(card a, card b)
{
    if (a.r != b.r)
        return a.r > b.r;
    else
        return a.b > b.b;
}

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        card cards[n];
        for (int i = 0; i < n; i++)
            cin >> cards[i].r;
        for (int i = 0; i < n; i++)
            cin >> cards[i].b;
        // sort(cards, cards + n, cmp);
        ll blue = 0, red = 0;
        for (int i = 0; i < n; i++)
        {
            if (cards[i].r > cards[i].b)
                red++;
            if (cards[i].r < cards[i].b)
                blue++;
        }
        if (blue > red)
            cout << "BLUE\n";
        if (blue < red)
            cout << "RED\n";
        if (blue == red)
            cout << "EQUAL\n";
    }
    return 0;
}