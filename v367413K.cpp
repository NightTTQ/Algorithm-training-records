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
    fast_io();
    int n, k, num;
    while (cin >> n >> k)
    {
        priority_queue<int, vector<int>, greater<int>> q;
        char c;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (c == 'I')
            {
                cin >> num;
                q.push(num);
                if (q.size() > k)
                    q.pop();
            }
            else
                cout << q.top() << "\n";
        }
    }
    return 0;
}