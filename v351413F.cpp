#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int n, m, l;
int num[200005];
int main()
{
	int t, cas = 1;
	scanf("%d", &t);
	while (t--)
    {
		scanf("%d%d%d", &n, &m, &l);	
		for (int i = 1; i <= n; i++)
			scanf("%d", &num[i]);
		num[0] = 0, num[++n] = m;
		int ans = 0;
		int last = l;
		sort(num, num+n);
		for (int i = 1; i <= n; i++)
        {
			int x = (num[i] - num[i-1]) % (l+1);
			int y = (num[i] - num[i-1]) / (l+1);
			if (last + x >= l+1)
            {
				last = x;
				ans += 2 * y + 1;
			}
			else if (last + x < l+1)
            {
				last = last + x;
				ans += 2 * y;
			}
		}
		printf("Case #%d: %d\n", cas++, ans);
	}
	return 0;
}