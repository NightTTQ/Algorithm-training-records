#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int l, n;
    cin >> l >> n;
    string ans;
    for (int i = 0; i < l;i++)
        ans.push_back('z');
    for (int i = 0; i < n - 1;i++)
    {
        for (int j = l - 1; j >= 0; j--)
        {
            if(ans[j]>'a')
            {
                ans[j]--;
                for (int k = j + 1; k < l;k++)
                    ans[k] = 'z';
                break;    
            }
            
        }
        
            
    }
        
    cout << ans << endl;
    system("pause");
    return 0;
}