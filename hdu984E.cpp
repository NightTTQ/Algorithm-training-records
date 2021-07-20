// submitted by HNUST025
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

const int MAXN = 1e7;
int prime[MAXN + 1];
bool visit[MAXN + 1];
int leng = 0;
ll ans;
int Esieve(int n)
{
    int k = 0;
    for (int i = 2; i * i <= n; i++)
        if (!visit[i])
            for (int j = i * i; j <= n; j += i)
                visit[j] = true;
    for (int i = 2; i <= n; i++)
        if (!visit[i])
            prime[k++] = i;
    return k;
}
int main()
{
    fast_io();
    int T;
    memset(visit, false, sizeof visit);
    leng = Esieve(10000000);
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        if (n == 2)
        {
            cout << "0\n";
            continue;
        }
        ans = 0;
        for (int i = 0; i <= leng; i++)
        {
            if (prime[i] <= n)
                ans += prime[i];
            else
                break;
        }
        ans += (2 + n) * (n - 1) / 2;
        cout << ans - 4 << "\n";
    }
}