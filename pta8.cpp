#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <map>
using namespace std;
string name[10001];
int num[10001];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> name[i] >> num[i];
    long long sum=0;
    for (int i = 0; i < n;i++)
        sum += num[i];
    int ans = 0;
    ans = (sum / n) / 2;
    cout << ans << " ";
    int min=INT32_MAX;
    int minn;
    for (int i = 0; i < n;i++)
    {
        if(abs((num[i]-ans))<min)
        {
            minn = i;
            min = abs((num[i] - ans));
        }
            
    }
    cout << name[minn];
    system("pause");
    return 0;
}