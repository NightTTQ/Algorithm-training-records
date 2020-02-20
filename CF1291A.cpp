#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,odd=0;
        string out,num;
        cin>>n>>num;
        for(auto i:num)
        {
            if((i-'0')%2==1)
            {
                odd++;
                out.push_back(i);
            }
            if(odd>=2)break;
        }
        if(odd>=2)
            cout<<out<<endl;
        else
            cout<<-1<<endl;
    }
    //system("pause");
    return 0;
}