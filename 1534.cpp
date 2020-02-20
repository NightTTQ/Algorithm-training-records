#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
void lazier(char c[15])
{
    int t=-1;
    for(int i=0;i<=strlen(c)-2;i++)
    {
        if(c[i]==c[i+1])
        {
            t=i+1;
            break;
        }
    }
    if(t==-1)
    {
        cout<<c<<endl;
        return;
    }   
    if (c[t]=='9')
    {
        c[t]='0';
        c[t-1]='0';
        if(t>=2)
            c[t-2]+=(char)(int)1;
        else
        {
            char temp[15];
            temp[0]='1';
            for(int j=0;j<=strlen(c)-1;j++)
                temp[j+1]='0';
            strcpy(c,temp);
            cout<<c<<endl;
            lazier(c);
            return;
        }
        lazier(c);
    }
    else
    {
        int num=0;
        c[t]+=(char)(int)1;
        for(int j=t+1;j<=strlen(c)-1;j++)
        if (num == 0)
        {
            c[j] = '0';
            num++;
        }
        else 
        {
            c[j]='1';
            num--;
        }
        cout<<c<<endl;
    }
}
int main()
{
    char n[15];
    while(cin>> n)
    {
        if(strlen(n)==1)
        {
            cout<<n<<endl;
            continue;
        }
        else if (strlen(n)==2)
        {
            if(n[0]!=n[1])
            {
                cout<<n<<endl;
                continue;
            }
            else if(n[0]=='9')
            {
                cout<<"101"<<endl;
                continue;
            }
            else
            {
                n[1]+=(char)(int)1;
                cout<<n<<endl;
                continue;
            }
        }
        else lazier(n);
    }
    system("pause");
    return 0;
}