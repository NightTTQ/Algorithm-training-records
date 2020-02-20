#include <iostream>
#include <cstdio>
#include <set>
using namespace std;
int main()
{
    int n;
    set<int> s;
    for (int i = 2; i <= INT32_MAX / (i * i);i++)
        for (int j = 2;j*j<=INT32_MAX/(i*i*i); j++)
        if(i!=j)
            s.insert(i * i * i * j * j);

        while (cin >> n)
        {
            if(s.find(n)!=s.end())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    system("pause");
    return 0;
}