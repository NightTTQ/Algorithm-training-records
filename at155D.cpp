#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <map>
using namespace std;
long long aaa[200001];
int main()
{
    int n,k,t=0;
    cin >> n >> k;
    map<long long, long long> num;
    for (int i = 0; i < n;i++)
        cin >> aaa[i];
    for (int i = 0; i < n - 1;i++)
        for (int j = i + 1; j < n; j++)
        {
            num[aaa[i] * aaa[j]]++;
            t++;
        }

    for (auto i:num)
    {
        if(k-i.second<=0)
        {
            cout << i.first;
            break;
        }
            
        else
            k -= i.second;
    }
    system("pause");
    return 0;
}