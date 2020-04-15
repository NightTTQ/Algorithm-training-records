//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <iomanip>
#include <iostream>
#include <vector>    
#include <cstdlib>
#include <set>
#include <map>
#include <queue>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
ll mod = 10e9 + 7;
using namespace std;
bool isok(int x,int y,int z)
{
    if((x+y)>z&&(x+z)>y&&(y+z)>x)
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x, y, z;
        x = b, y = c, z = c;
        cout << x << " " << y << " " << z << "\n";

    }

    return 0;
}