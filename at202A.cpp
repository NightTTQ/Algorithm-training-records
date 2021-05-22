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

int main()
{
    fast_io();
    int a, b, c;
    cin >> a >> b >> c;
    a = 7 - a;
    b = 7 - b;
    c = 7 - c;
    cout << a + b + c;
    return 0;
}