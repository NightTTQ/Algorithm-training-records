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

class fraction
{
   private:
    ll above;                        //分子
    ll below;                        //分母
    void reduction();                //约分
    fraction makeCommond(fraction);  //通分

   public:
    fraction(ll a = 0, ll b = 1)
    {  //构造函数
        above = a;
        below = b;
    }
    fraction add(fraction);      //两分数相加
    fraction sub(fraction);      //本分数减去实参分数
    fraction mul(fraction);      //两分数相乘
    fraction div(fraction);      //本分数除以实参分数
    fraction reciprocal();       //求倒数
    bool equal(fraction);        //等于运算
    bool greaterThan(fraction);  //大于运算
    bool lessThan(fraction);     //小于运算
    void display();              //显示分数
    void input(ll a, ll b);      //输入分数
};
void fraction::reduction()
{
    ll i, comdiv, small, max;
    if (this->above < this->below)
    {
        small = this->above;
        max = this->below;
    }
    else
    {
        small = this->below;
        max = this->above;
    }
    for (i = small; i > 1; i--)
    {
        if (small % i == 0 & max % i == 0)
            break;
    }
    comdiv = i;  //最大公约数
    if (i != 0)
    {
        this->above /= i;
        this->below /= i;
    }
}
fraction fraction::makeCommond(fraction frac)
{
    ll b1 = this->below, b2 = frac.below, m, s;
    if (b1 > b2)
    {
        m = b1 % b2;
        s = b2;
    }
    else
    {
        m = b2 % b1;
        s = b1;
    }

    while (m > 0)
    {
        ll res = s % m;
        s = m, m = res;
    }

    ll small = (b1 * b2) / s;
    this->above = this->above * (small / this->below);
    frac.above = frac.above * (small / frac.below);
    this->below = small;
    frac.below = small;
    return frac;
}
fraction fraction::add(fraction fr)
{
    fraction myFraction;
    myFraction.above = this->above * fr.below + fr.above * this->below;
    myFraction.below = this->below * fr.below;

    myFraction.reduction();
    return myFraction;
}
fraction fraction::sub(fraction fr)
{
    fraction myFraction;
    myFraction.above = this->above * fr.below - fr.above * this->below;
    myFraction.below = this->below * fr.below;

    myFraction.reduction();
    return myFraction;
}
fraction fraction::mul(fraction fr)
{
    fraction myFraction;

    myFraction.above = this->above * fr.above;
    myFraction.below = this->below * fr.below;

    myFraction.reduction();
    return myFraction;
}
fraction fraction::div(fraction fr)
{
    fraction myFraction;

    myFraction.above = this->above * fr.below;
    myFraction.below = this->below * fr.above;

    myFraction.reduction();
    return myFraction;
}
fraction fraction::reciprocal()
{
    fraction myFraction(this->above, this->below);
    if (this->above != 0)
    {
        ll temp = myFraction.above;
        myFraction.above = myFraction.below;
        myFraction.below = temp;
    }
    return myFraction;
}
bool fraction::equal(fraction frac)  //等于运算
{
    bool result = false;
    if (this->sub(frac).above == 0)
        result = true;
    return result;
}
bool fraction::greaterThan(fraction frac)  //大于运算
{
    bool result = false;
    if (this->sub(frac).above > 0)
        result = true;
    return result;
}
bool fraction::lessThan(fraction frac)  //小于运算
{
    bool result = false;
    if (this->sub(frac).above < 0)
        result = true;
    return result;
}
void fraction::display()
{
    cout << this->above << endl
         << "---" << endl
         << this->below << endl
         << endl
         << endl;
}
void fraction::input(ll a, ll b)  //输入分数
{
    this->above = a;
    if (b == 0)
        b = 1;
    this->below = b;
    this->reduction();
}

struct flight
{
    ll pos = 0;
    ll speed = 0;
};

int main()
{
    fast_io();
    ll n;
    cin >> n;
    flight flights[n];
    bool alive[n];
    memset(alive, true, sizeof(alive));
    fraction curmin(9223372036854775807, 1);
    fraction index[n][n];
    fraction INF(9223372036854775807, 1);
    fraction zero(0, 1);
    set<ll> del;
    ll ans = n;
    for (int i = 0; i < n; i++)
        cin >> flights[i].pos >> flights[i].speed;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (flights[i].speed <= flights[j].speed)
                index[i][j] = zero;
            else
            {
                index[i][j].input((flights[j].pos - flights[i].pos),
                                  (flights[i].speed - flights[j].speed));
                // if ((flights[i].speed - flights[j].speed) * curmin <
                //     (flights[j].pos - flights[i].pos))
                if (index[i][j].lessThan(curmin))
                {
                    curmin = index[i][j];
                    del.clear();
                    del.insert(i);
                    del.insert(j);
                }
                else if (index[i][j].equal(curmin))
                {
                    del.insert(i);
                    del.insert(j);
                }
            }
        }
    curmin = INF;
    while (!curmin.equal(zero))
    {
        curmin = INF;
        for (auto i : del)
        {
            alive[i] = false;
            ans--;
        }

        if (ans == 0)
            break;

        for (int i = 0; i < n; i++)
        {
            if (alive[i] == false)
                continue;
            for (int j = i; j < n; j++)
            {
                if (alive[j] == false)
                    continue;
                // if ((flights[i].speed - flights[j].speed) * curmin <
                //     (flights[j].pos - flights[i].pos))
                if (index[i][j].lessThan(curmin))
                {
                    curmin = index[i][j];
                    del.clear();
                    del.insert(i);
                    del.insert(j);
                }
                else if (index[i][j].equal(curmin))
                {
                    del.insert(i);
                    del.insert(j);
                }
            }
        }
    }
    cout << ans << "\n";
    for (int i = 0; i < n; i++)
        if (alive[i])
            cout << i + 1 << " ";
    return 0;
}