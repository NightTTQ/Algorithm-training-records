#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if(s=="Rock")
        cout << "Paper";
    else if (s=="Paper")
        cout << "Scissors";
    else
        cout << "Rock";
    system("pause");
    return 0;
}
