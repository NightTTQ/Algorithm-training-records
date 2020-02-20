#include <iostream>
#include <cstdio>
using namespace std;
int num[200001];
int ans = 1;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++)
        cin >> num[i];
    if(n==1)
    {
        cout << ans;
        return 0;
    }
    int min;
    min = num[1];
    for (int i = 2; i <= n; i++)
        if(min<num[i])
            continue;
        else
        {
            ans++;
            min = num[i];
        }
            
    cout << ans;
    system("pause");
    return 0;
}