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
#include <vector>

#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
#define N 1000007
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        ll ans = 0;
        ll br, bp, bs;
        cin >> br >> bp >> bs;
        ll dr, dp, ds;
        cin >> dr >> dp >> ds;
        ll win = 0, no = 0, lose = 0;

        if (br > 0)
        {
            // r + p
            win = min(br, dp);
            ans += win;
            br -= win;
            dp -= win;
            if (br > 0)
            {
                // r + r
                no = min(br, dr);
                br -= no;
                dr -= no;
                if (br > 0)
                {
                    // r + s
                    lose = min(br, ds);
                    ans -= lose;
                    br -= lose;
                    ds -= lose;
                }
            }
        }

        if (bp > 0)
        {
            // p + s
            win = min(bp, ds);
            ans += win;
            bp -= win;
            ds -= win;
            if (bp > 0)
            {
                // p + p
                no = min(bp, dp);
                bp -= no;
                dp -= no;
                if (bp > 0)
                {
                    // p + r
                    lose = min(bp, dr);
                    ans -= lose;
                    bp -= lose;
                    dr -= lose;
                }
            }
        }

        if (bs > 0)
        {
            // s + r
            win = min(bs, dr);
            ans += win;
            bs -= win;
            dr -= win;
            if (bs > 0)
            {
                // s + s
                no = min(bs, ds);
                bs -= no;
                ds -= no;
                if (bs > 0)
                {
                    // s + p
                    lose = min(bs, dp);
                    ans -= lose;
                    bs -= lose;
                    dp -= lose;
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
