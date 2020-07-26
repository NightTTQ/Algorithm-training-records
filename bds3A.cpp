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
    // fast_io();
    int T;
    double t;
    scanf("%d", &T);
    while (T--)
    {
        double max = -1;
        int n;
        scanf("%d", &n);
        double b[n];
        double c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i] >> c[i];
            t = (1 - c[i]) / (b[i] + 1 - c[i]);
            if (t > max)
                max = t;
        }
        printf("%.5f\n", max);
    }
    return 0;
}