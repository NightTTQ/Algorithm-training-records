#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int n,m,diyi=-1,zuihou=-1;
int ans[101],big=0;
string out;

bool isre(string a,string b)
{
    for (int i = 0; i < a.length();i++)
    if(a[i]!=b[a.length()-i-1])
        return false;
    return true;
}

struct dui
{
    string s;
    bool selected=false;
    int other=-1;
    bool selfis = false;
    bool have = false;
} hwd[101];

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n;i++)
    {
        cin >> hwd[i].s;
        if(isre(hwd[i].s, hwd[i].s))
            hwd[i].selfis = true;
    }

    for (int i = 0; i < n;i++)
        for (int j = n - 1; j >= 0;j--)
        {
            if(isre(hwd[i].s, hwd[j].s)&&!hwd[i].have&&!hwd[j].have)
            {
                hwd[i].other = j;
                hwd[j].other = i;
                hwd[i].have = true;
                hwd[j].have = true;
            }
        }
    for (int i = 0; i < n; i++)
        if (hwd[i].have && !hwd[i].selected && !hwd[i].selfis)
        {
            out = out + hwd[i].s;
            hwd[i].selected = true;
            hwd[hwd[i].other].selected = true;
            ans[big++] = i;
        }
    for (int i = 0; i < n;i++)
    if(hwd[i].selfis)
    {
        out = out + hwd[i].s;
        break;
    }
    for (int i = big - 1; i >= 0;i--)
        out = out + hwd[hwd[ans[i]].other].s;
    cout << out.length() << endl
         << out << endl;
    system("pause");
    return 0;
}