#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
double fx(double x)
{
    return 8 * x * x * x * x + 7 * x * x * x + 2 * x * x + 3 * x + 6;
}
double fun(double y)
{
    double a = 0, b = 100;
    while(b-a>1e-7)
    {
        double mid = (a + b) / 2;
        if(fx(mid)>y)
            b = mid;
        else
            a = mid;
    }
    return b;
}
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        double y;
        cin >> y;
        if(y<fx(0)-1e-3||y>fx(100)+1e-3)
        {
            cout << "No solution!" << endl;
            continue;
        }
        cout << fixed << setprecision(4) << fun(y)<<endl;
    }
    system("pause");
    return 0;
}