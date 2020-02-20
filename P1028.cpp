#include<iostream>
using namespace std;
int main()
{
	int n,f[1005];
	f[0] = f[1] = 1;
	for (int i = 2; i <= 1000; i++)
		if (i % 2 == 0)
			f[i] = f[i - 1] + f[i / 2];
		else
			f[i] = f[i - 1];
	scanf("%d", &n);
	printf("%d\n", f[n]);
	system("pause");
    return 0;
}

