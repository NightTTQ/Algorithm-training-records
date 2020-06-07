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
    int tt[4], t;
    int a, b;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d.%d", &a, &b);
        tt[i] = a * 100 + b;
    }
    scanf("%d.%d", &a, &b);
    t = a * 100 + b;
    sort(tt, tt + 4);
    int sum;
    sum = tt[1] + tt[2] + tt[3];
    if (sum <= t)
        printf("infinite");
    else
    {
        int i = t - tt[1] - tt[2];
        if (i >= tt[0])
            printf("%d.%02d\n", i / 100, i % 100);
        else
            printf("impossible");
    }
    return 0;
}