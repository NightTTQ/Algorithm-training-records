#include <iostream>
#include <cstdio>
int x = 1, y = 1, f = 1;
bool map[11][11];
using namespace std;
void move(int);
void fix();
int main()
{
    int n;
    cin >> n;
    int t;
    for (int i = 1; i <= n;i++)
    {
        cin >> t;
        move(t);
    }
    int sum=0;
    map[1][1] = true;
    for (int i = 1; i <= 10;i++)
        for (int j = 1; j <= 10;j++)
        if(map[j][i])
            sum++;
    cout << sum;
    system("pause");
    return 0;
}

void move(int c)
{
    if(c==1)
    {
        f--;
        if(f==0)
            f = 4;
    }
    else if(c==2)
    {
        f++;
        if(f==5)
            f = 1;
    }
    else if(c==3)
    {
        f += 2;
        if(f>=5)
            f -= 4;
    }
    else if(c==4)
    {
        if(f==1)
            x--;
        else if (f==2)
            y++;
        else if(f==3)
            x++;
        else if(f==4)
            y--;
        fix();
    }
    else if(c==5)
    {
        if(f==1)
            y++;
        else if(f==2)
            x++;
        else if(f==3)
            y--;
        else if (f==4)
            x--;
        fix();
    }
    else if(c==6)
    {
        if(f==1)
            x++;
        else if(f==2)
            y--;
        else if(f==3)
            x--;
        else if(f==4)
            y++;
        fix();
    }
    else if(c==7)
    {
        if(f==1)
            y--;
        else if(f==2)
            x--;
        else if(f==3)
            y++;
        else if(f==4)
            x++;
        fix();
    }
    cout << "(" << x << "," << y << ")" << endl;
    map[x][y] = 1;
}
void fix()
{
    if(x>=11)
        x = 10;
    if(x<=0)
        x = 1;
    if(y>=11)
        y = 10;
    if(y<=0)
        y = 1;
}