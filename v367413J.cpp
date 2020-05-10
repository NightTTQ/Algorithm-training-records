//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
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
struct node
{
    string str, n;
    int pri, num;
    bool operator<(const node& other) const
    {
        if (other.pri == pri)
            return other.num < num;
        else
            return other.pri < pri;
    }
};

int main()
{
    fast_io();
    priority_queue<node> q;
    string s;
    int num = 0;
    while (cin >> s)
    {
        if (s == "GET")
        {
            if (q.empty())
                cout << "EMPTY QUEUE!\n";
            else
            {
                cout << q.top().str << " " << q.top().n << "\n";
                q.pop();
            }
        }
        if (s == "PUT")
        {
            node now;
            cin >> now.str >> now.n >> now.pri;
            num++;
            now.num = num;
            q.push(now);
        }
    }
    return 0;
}