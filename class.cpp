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

class Test
{
   public:
    Test();
    Test(const int &x, const int &y);
    //~Test();
    static void set_name(const string &str);
    static string get_name();
    void Display(const Test &t);
    void Display(const Test &t) const;
    int GetX() const;
    int GetY() const;

   private:
    int x, y;
    static string name;
    const string str;
};

string Test::name = "Test";

Test::Test() : x(0), y(0){};
Test::Test(const int &x, const int &y) : x(x), y(y){};
void Test::set_name(const string &str)
{
    name = str;
}

string Test::get_name()
{
    return name;
}

void Test::Display(const Test &t)
{
    cout << "Name:" << name << "\n";
    cout << "X:" << t.x << " "
         << "Y:" << t.y << "\n";
}

void Test::Display(const Test &t) const
{
    cout << "Name:" << name << "\n";
    cout << "X:" << t.x << " "
         << "Y:" << t.y << "\n";
}

int Test::GetX() const
{
    return x;
};

int Test::GetY() const
{
    return y;
};

int main()
{
    fast_io();
    Test t;
    const Test c(-1, -1);
    t.Display(t);
    Test::set_name("Test1");
    t.Display(t);
    Test::set_name("Test2");
    c.Display(c);
    return 0;
}