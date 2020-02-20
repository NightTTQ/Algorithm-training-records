#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
void simple(int &m, int &n)
{
    int mm = m,nn=n;
    while(mm>0)
    {
        int c = nn % mm;
        nn = mm;
        mm = c;
    }
    m /= nn;
    n /= nn;
}
int main()
{   
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        int a,b;
        map<pair<double, string>, int>data;
        while(n--)
        {
            scanf("%d/%d",&a,&b);
            simple(a, b);
            string t1=to_string(a),t2=to_string(b),ans;
            ans=t1;
            ans=ans+'/';
            ans+=t2;
            data[make_pair((double)a/b, ans)]++;
        }
        printf("%d\n",data.size());
        for(auto i=data.begin();i!=data.end();i++)
            printf("%s %d\n",i->first.second.c_str(),i->second);
    }
    system("Pause");
    return 0;
}