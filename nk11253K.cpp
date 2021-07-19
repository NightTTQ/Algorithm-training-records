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

string dir[4] = {"D", "L", "R", "U"};
string A[20], B[20];
string tmp;
vector<string> ans;
bool visa[20][20], visb[20][20];

int cmp(string a, string b)
{
    if (a.length() != b.length())
        return a.length() < b.length();
    else
        return a < b;
}

bool canmove(int x, int y, int dindex, char c)
{
    if (c == 'A')
    {
        if (dir[dindex] == "D")
            x++;
        if (dir[dindex] == "L")
            y--;
        if (dir[dindex] == "R")
            y++;
        if (dir[dindex] == "U")
            x--;
    }
    else
    {
        if (dir[dindex] == "D")
            x++;
        if (dir[dindex] == "L")
            y++;
        if (dir[dindex] == "R")
            y--;
        if (dir[dindex] == "U")
            x--;
    }
    if (x < 0 || x >= 20 || y < 0 || y >= 20)
        return false;
    if (c == 'A')
        if (A[x][y] == '#')
            return false;
    if (c == 'B')
        if (B[x][y] == '#')
            return false;
    return true;
}

int bfs(int ax, int ay, int bx, int by, int deep)
{
    if (visa[ax][ay] && visb[bx][by])
        return deep;
    visa[ax][ay] = visb[bx][by] = true;
    for (int i = 0; i < 4; i++)
    {
        if (ax == 0 && ay == 19 && bx == 0 && by == 0)
        {
            ans.push_back(tmp);
            return deep;
        }
        bool moveA = canmove(ax, ay, i, 'A'), moveB = canmove(bx, by, i, 'B');
        if (!moveA && !moveB)
            continue;
        tmp.append(dir[i]);
        if (moveA)
        {
            if (dir[i] == "D")
                ax++;
            if (dir[i] == "L")
                ay--;
            if (dir[i] == "R")
                ay++;
            if (dir[i] == "U")
                ax--;
        }
        if (moveB)
        {
            if (dir[i] == "D")
                bx++;
            if (dir[i] == "L")
                by++;
            if (dir[i] == "R")
                by--;
            if (dir[i] == "U")
                bx--;
        }

        bfs(ax, ay, bx, by, deep + 1);
        tmp = tmp.substr(0, (int)tmp.length() - 1);
        if (moveA)
        {
            if (dir[i] == "D")
                ax--;
            if (dir[i] == "L")
                ay++;
            if (dir[i] == "R")
                ay--;
            if (dir[i] == "U")
                ax++;
        }
        if (moveB)
        {
            if (dir[i] == "D")
                bx--;
            if (dir[i] == "L")
                by--;
            if (dir[i] == "R")
                by++;
            if (dir[i] == "U")
                bx++;
        }
    }
    visa[ax][ay] = visb[bx][by] = false;
    return deep;
}

int main()
{
    fast_io();
    memset(visa, 0, sizeof(visa));
    memset(visb, 0, sizeof(visb));
    for (int i = 0; i < 20; i++)
        cin >> A[i] >> B[i];
    bfs(19, 19, 19, 0, 0);
    sort(ans.begin(), ans.end(), cmp);
    // cout << ans[0].length() << "\n" << ans[0] << "\n";
}