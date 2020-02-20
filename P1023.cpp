#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,paper[10001],tal=0,ans=0;
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        cin >> paper[i];
        tal += paper[i];
    }
    int a = tal / n;
    for (int i = 1; i<=n; i++)
    {
        if(paper[i]!=a)
        {
            paper[i + 1] += paper[i] - a;
            ans++;
        }
    }
    cout << ans;
    system("pause");
    return 0;
}