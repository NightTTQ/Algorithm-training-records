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
    fast_io();
    double t;
    vector<double> v;
    while (cin >> t)
    {
        v.push_back(t);
    }
    double avg = 0;
    for (auto i : v)
        avg += i;
    avg /= v.size();
    cout << "avg:" << avg << "\n";
    double s = 0.0;
    for (auto i : v)
        s += (i - avg) * (i - avg);
    s /= v.size() - 1;
    s = sqrt(s);
    cout << "s:" << s << "\n";
    cout << "A:" << s / sqrt(v.size()) << "\n";
    return 0;
}