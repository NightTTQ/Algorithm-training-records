#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    char c;
    int n;
    bool flag = true;
    cin >> c >> n;
    string s[n];
    cin.get();
    for (int i = 0; i < n;i++)
        getline(cin, s[i]);
    for (int i = 0; i < n;i++)
        if(s[i]!=s[n-i-1])
            flag = false;
    if(flag)
        cout << "bu yong dao le" << endl;
    for (int i = n - 1; i >= 0;i--)
    {
        for (int j = n - 1; j >= 0;j--)
            if(s[i][j]!=' ')
                cout << c;
            else
                cout << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}
        