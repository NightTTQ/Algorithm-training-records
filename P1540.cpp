#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
  	int m, n, num, ans=0;
  	cin >> m >> n;
	int dic[m + 1];
	memset(dic, -1, sizeof(dic));
	for (int i = 1; i <= n;i++)
	{
		cin >> num;
		for (int j = 1; j <= m;j++)
		{
			if(dic[j]==num)
				break;
			else if(dic[j]==-1)
			{
				dic[j] = num;
				ans++;
				break;
			}
			else if(j==m)
			{
				for (int k = 2; k <= m;k++)
					dic[k - 1] = dic[k];
				dic[j] = num;
				ans++;
				break;
			}
		}
	}
	cout << ans;
	system("pause");
	return 0;
}