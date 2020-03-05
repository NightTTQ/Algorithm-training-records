#include<bits/stdc++.h>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m, score[1001], sum = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> score[i];
            sum += score[i];
        }
        int avg = sum / n;
        if(sum>=m)
            cout << m << "\n";
        else
            cout << sum << "\n";

    }
    return 0;
}