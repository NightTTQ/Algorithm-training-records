//#include <bits/stdc++.h>
#include <iostream>

#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    int T;
    cin >> T;
    while(T--)
    {
        string s;
        int l = 0, a = 0;
        cin >> s;
        for (int i = 0; i < s.length();i++)
            if(s[i]=='1')
            {
                for (int j = i + 1; j < s.length();j++)
                    if(s[j]=='0')
                        l++;
                break;
            }
        
        for (int i = s.length(); i >= 0;i--)
            if(s[i]=='1')
                {
                    a =s.length() - i-1;
                    break;
                }
    
        cout << l - a << endl;
    }
    system("pause");
    return 0;
}