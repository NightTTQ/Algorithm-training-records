//#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    char s[8];
    int t[8]={0,0,0,0,0,0,0,0}, ans;
    cin >> s;
    ans = 0;
    if(s[0]=='0')
        ans=1;
    else
        for (int i = 0; i <= 7;i++)
        {
            if(s[i]>ans)
                ans = s[i];
        }

    cout << ans;
    system("pause");
    return 0;
}