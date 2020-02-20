#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <map>
using namespace std;
string t;

int main()
{
    int n,mai=0;
    map<string, int> tic;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> t;
        tic[t]++;
        if(tic[t]>mai)
            mai = tic[t];
    }
    for(auto i:tic)
        if(i.second==mai)
            cout << i.first << endl;

    system("pause");
    return 0;
}