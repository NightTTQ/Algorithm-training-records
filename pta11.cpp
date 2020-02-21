#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct st
{
    string email;
    int score;

} peo[10001];
int cmp(st f,st a)
{
    if(f.score!=a.score)
        return f.score > a.score;
    else
        return f.email < a.email;
}
int main()
{
    int n, g, k, mon=0;
    cin >> n >> g >> k;
    for (int i = 0; i < n;i++)
    {
        cin >> peo[i].email >> peo[i].score;
        if(peo[i].score>=g)
            mon += 50;
        else if(peo[i].score>=60)
            mon += 20;
    }
    sort(peo, peo + n,cmp);
    cout << mon << endl;
    int last = 0;
    for (int i = 1; i <= k;i++)
    {
        if(i==1)
        {
            cout << i << " " << peo[i-1].email << " " << peo[i-1].score << endl;
            last = i;
        }
            
        else
        {
            if(peo[i-1].score==peo[i-2].score)
                cout << last << " " << peo[i-1].email << " " << peo[i-1].score << endl;
            else
            {
                cout << i << " " << peo[i-1].email << " " << peo[i-1].score << endl;
                last = i;
            }
        }
    }
    for (int i = k; i < n;i++)
    {
        if(peo[i].score==peo[i-1].score)
            cout << last << " " << peo[i].email << " " << peo[i].score << endl;
        else
            break;
    }
        system("pause");
    return 0;
}