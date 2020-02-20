#include<iostream>
#include<cstdio>
using namespace std;
int ads(const int lva ,const int rva) 
{

     int a ;

     a = lva + rva ;

    return a;    
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<ads(n,m);
    system("pause");
    return 0;
}
template <typename T>
T ads(const T lva,const T rva)
{
    T a;
    a=lva+rva;
    return a;
}

