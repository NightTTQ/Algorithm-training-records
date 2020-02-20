#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
    int a[101];
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> a[i];
    sort(a, a+n);
    
    system("pause");
    return 0;
}