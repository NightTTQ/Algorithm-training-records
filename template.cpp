#include <cstdio>
#include <iostream>
using namespace std;

template <typename T>
T ads(const T lva, const T rva)
{
    T a;
    a = lva + rva;
    cout << "Now is a template\n";
    return a;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << ads(n, m);
    return 0;
}

int ads(const int lva, const int rva)
{
    int a;
    a = lva + rva;
    cout << "Now is a function\n";
    return a;
}
