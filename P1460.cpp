#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int n, v, g, vv[30],food[30][30],ans[30],mini=666,eat[30];
int p=0;
void search(int, int);
bool suit(int),flag=false;
int main()
{
    //memset(eat, 0, sizeof(eat));
    cin >> v;
    for (int i = 1; i <= v;i++)
        cin >> vv[i];
    cin >> g;
    for (int i = 1; i <= g;i++)
        for (int j = 1; j <= v;j++)
            cin >> food[i][j];
    search(1, 0);
    cout << mini << ' ';
    for(int i=1;i<=mini;i++)
        cout << ans[i] << ' ';
    system("pause");
    return 0;
}
inline void search(int now,int num)//now 现在选到的饲料编号。num 一共选择的饲料数
{
    if(now>g)
    {
        if(suit(num))
        {
            if(num<mini)
            {
                mini = num;
                for (int i = 1; i <= mini;i++)
                    ans[i] = eat[i];
            }
            
        }
        return;
    }
    eat[num + 1] = now;
    search(now + 1, num + 1);
    eat[num + 1] = 0;
    search(now + 1, num);
}
inline bool suit(int md)
{
    for(int i=1; i<=v; i++)
    {
        int summ=0;
        for(int j=1; j<=md; j++)
            summ += food[eat[j]][i];
        if(summ<vv[i]) return false; 
    }
    return true;
}