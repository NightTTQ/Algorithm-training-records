//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    string s;
    fast_io();
    int n,ans=0;
    cin >> n >> s;
    int i;
    cin >> i;
    s.erase(i, 1);
    cout << s;
    ans++;
    system("pause");
    return 0;
}