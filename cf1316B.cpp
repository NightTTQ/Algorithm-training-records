#include<bits/stdc++.h>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
struct d
{
    string s;
    int move;
};
string rev(const string &s, const int k, const int n) 
{
    string l = s.substr(0, k), r = s.substr(k);
    if ((n - k) % 2) {
        reverse(l.begin(), l.end());
    }
    return r.append(l);
}
bool cmp2(d f,d a)
{
    if(f.s.length()!=a.s.length())
        return f.s.length() < a.s.length();
    else if(f.s != a.s)
        return f.s < a.s;
    else
        return f.move < a.move;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        d str[1000000];
        int n, num = 0;
        string s;
        cin >> n >> s;
        str[0].s = s, str[0].move = 1;
        for (int i = 1; i <= n; i++)
        {
            str[num].s = rev(s, i, n);
            str[num++].move = i;
        }
        
        sort(str, str + num - 1, cmp2);
        cout << str[0].s << "\n"
             << str[0].move << "\n";
    }
    return 0;
}