#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        long long dis = y-x;
        if(dis%(a+b)==0)
            cout << dis / (a + b)<<endl;
        else
            cout << "-1" << endl;
    }
    system("pause");
    return 0;
}