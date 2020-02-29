#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define MAXN 1000000
typedef long long ll;
typedef long double ld;
int lpf[1000001]={},n,cnt=0;
using namespace std;
int main()
{
    lpf[1] = 0;
    for (int i = 2; i <= MAXN;i++)
        if(!lpf[i])
        {
            cnt++;
            for(int j=i;j<= MAXN;j+=i)
                lpf[j] = cnt;
        }
    while(cin>>n)
        cout << lpf[n] << endl;
    system("pause");
    return 0;
}