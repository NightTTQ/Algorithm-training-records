#include <iostream>
#include <cstdio>
#include <cmath>
typedef long long ll;
typedef long double ld;
using namespace std;

struct point
{
    int x, y;
    point() : x(0), y(0){};
    point(int arg1, int arg2) : x(arg1), y(arg2){};
    double dis(point &another)
    {
        return sqrt((this->x - another.x) * (this->x - another.x) + (this->y - another.y) * (this->y - another.y));
    }
        
};

void gogogo(int &num,int &square,int &a,char how)
{
    if(square<num)
        for (int i = 1; i < square;i++)
        {
            num--;
            if(how=='+')
                a++;
            else
                a--;
        }
    else
    {
        for (int i = 1; i < num;i++)
            if(how=='+')
                a++;
            else
                a--;
        num = 0;
    }
}

void tofind(int num1,int num2,int square,point &poi1,point &poi2)
{
    bool flag,ok1,ok2;
    ok1 = ok2 = 0;
    while(num1>0||num2>0)
    {
        flag = 0;
        if((num1-square*square+(square-2)*(square-2))>0&&square!=1&&!ok1)
        {
            num1 -= square * square - (square - 2) * (square - 2);
            poi1.x++;
            poi1.y++;
            if(flag==1)
                continue;
            square -= 2;
            flag = 1;
        }
        else if(!ok1)
        {
            gogogo(num1, square, poi1.x, '+');
            gogogo(num1, square, poi1.y, '+');
            gogogo(num1, square, poi1.x, '-');
            gogogo(num1, square, poi1.y, '-');
            ok1 = 1;
        }

        if((num2-square*square+(square-2)*(square-2))>0&&square!=1&&!ok2)
        {
            num2 -= square * square - (square - 2) * (square - 2);
            poi2.x++;
            poi2.y++;
            if(flag==1)
                continue;
            square -= 2;
            flag = 1;
        }
        else if(!ok2)
        {
            gogogo(num2, square, poi2.x, '+');
            gogogo(num2, square, poi2.y, '+');
            gogogo(num2, square, poi2.x, '-');
            gogogo(num2, square, poi2.y, '-');
            ok2 = 1;
        }
        if(ok1&&ok2)
            break;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int square, p1, p2;
        cin >> square >> p1 >> p2;
        if(p1==p2)
        {
            cout << "0.000" << endl;
            continue;
        }
        if(p1>p2)
            swap(p1, p2);
        point a, b;
        a.x = a.y = b.x = b.y = 1;
        tofind(p1, p2, square, a, b);
        printf("%.3f\n", a.dis(b));
    }
    system("pause");
    return 0;
}