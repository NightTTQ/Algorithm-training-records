// fraction.h
#ifndef fractionH
#define fractionH
#include <iostream>
typedef long long ll;
typedef long double ld;
using namespace std;
class fraction
{
    ll num;
    ll den;
    void standardize();

   public:
    fraction(ll n = 0, ll d = 1);
    fraction operator-() const
    {
        return fraction(-num, den);
    }
    friend fraction operator-(fraction f);
};

#endif