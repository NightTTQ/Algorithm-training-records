#include<bits/stdc++.h>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
string s;
bool work(int mid)
{
    int l = 0, r = 0;
    for (int i = 0; i < mid;i++)
        if(s[i]=='(')
            ++l;
    for (int i = mid; i < s.length();i++)
        if(s[i]==')')
            ++r;
    return l >= r;
}

int main()
{
    fast_io();
    bool flag=false;
    cin >> s;
    vector<vector<int>> all;
    do
    {
        flag = false;
        int l = 0, r = s.length(), temp = (l + r) / 2;
        while (r >= l)
        {
            int mid = (l + r) / 2;
            if(work(mid))
            {
                temp = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        vector<int> del;
        for (int i = 0; i < temp; i++)
        {
            if (s[i] == '(') 
            {
                s[i] = ' ';
                del.push_back(i);
            }
        }
        for (int i = temp; i < s.length(); i++)
        {
            if (s[i] == ')')
            {
                s[i] = ' ';
                del.push_back(i);
            }
        }
        if(del.size())
        {
            flag = true;
            all.push_back(del);
        }
    }while(flag);
    cout << all.size() << '\n';
    for (int i = 0; i < all.size();i++)
    {
        cout << all[i].size() << '\n';
        for (int j = 0; j < all[i].size() - 1;j++)
            cout << all[i][j] + 1 << " ";
        cout << all[i][all[i].size() - 1] + 1 << '\n';
    }
    return 0;
}