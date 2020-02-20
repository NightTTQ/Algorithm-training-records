#include<iostream>
using namespace std;
int main()
{
    long long p;
    int t;
    cin >> t;
    for (int i = 1; i <= t;i++)
    {
        cin >> p;
        if(p==1)
            cout << "Yes" << endl;
        else if(p==11)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}