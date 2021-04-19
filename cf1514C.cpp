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
int n;
vector<int> ans;

bool check(vector<int> res)
{
    ll tmp = 1;
    for (auto i : res)
        tmp *= i;
    if (tmp % (n + 1) == 1)
        return true;
    else
        return false;
}

void dfs(int now, int num) {}

int main()
{
    fast_io();
    cin >> n;

    return 0;
}