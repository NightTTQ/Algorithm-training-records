#include <cstdio>
#include<cstring>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define MAXN 1000000
typedef long long ll;
typedef long double ld;
int lpf[1000001]={},n;
using namespace std;
int main()
{
    int k = 1;
    memset(lpf, 0, sizeof(lpf));
    lpf[1] = 0;
    for (int i = 2; i <= MAXN;i++)
        if(!lpf[i])
        {
            lpf[i] = k;
            for(int j=i+i;j< MAXN;j+=i)
                lpf[j] = k;
            k++;
        }


    while(~scanf("%d",&n))
        printf("%d\n",lpf[n]);
    return 0;
}