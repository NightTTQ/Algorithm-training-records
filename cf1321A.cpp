#include <bits/stdc++.h>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    int n,r[101],b[101],ans=0;
    int up = 0, down = 0;
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> r[i];
    for (int i = 0; i < n;i++)
        cin >> b[i];
    for (int i = 0; i < n;i++)
    {
        if(r[i]==1&&b[i]==0)
            up++;
        if(r[i]==0&&b[i]==1)
            down++;
    }
    if(up==0)
        cout << "-1";
    else
        cout << down / up + 1;
        system("pause");
    return 0;
}