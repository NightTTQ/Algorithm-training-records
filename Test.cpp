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
const int N = 100010;
int stack[N], a[N], l[N], r[N];
long long sum[N];  // sum[i]是前缀和，即前i个数的总和

int main()
{
    int n;
    scanf("%d", &n);
    sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        sum[i] = sum[i - 1] + a[i];
    }
    //求出每个数的左边界
    int top = 0;
    stack[0] = 0;
    a[0] = -1;
    for (int i = 1; i <= n; i++)

    {
        while (a[stack[top]] >= a[i])
            top--;
        l[i] = stack[top] + 1;
        stack[++top] = i;
    }
    //求出每个数的右边界
    top = 0;
    stack[0] = n + 1;
    a[n + 1] = -1;
    for (int i = n; i >= 1; i--)

    {
        while (a[stack[top]] >= a[i])
            top--;
        r[i] = stack[top] - 1;
        stack[++top] = i;
    }
    long long ans = -1;
    int id = 0;
    for (int i = 1; i <= n; i++)

    {
        long long temp = (sum[r[i]] - sum[l[i] - 1]) * a[i];
        if (temp > ans)

        {
            ans = temp;
            id = i;
        }
    }
    printf("%lld\n%d %d\n", ans, l[id], r[id]);
    return 0;
}