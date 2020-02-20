#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
using namespace std;
int ren[101];
int main()
{
    int n,p;
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> ren[i];
    for (int i = 0; i < n;i++)
    {
        if(ren[i]%2==0)
        {
            if(ren[i]%3==0||ren[i]%5==0)
                continue;
            else
            {
                cout << "DENIED" << endl;
                system("pause");
                return 0;
            }
        }
    }
    cout << "APPROVED" << endl;
    system("pause");
    return 0;
}