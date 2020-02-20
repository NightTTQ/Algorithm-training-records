#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
int map[1005][1005];
int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
int way,n,m,d=0,step[1000000];
int passed[1005][1005];
int block[1005][1005];
int a, b;
inline int dfs(int x,int y)
{
	for(int i=0;i<=3;i++)
	{
		int nx=x+dir[i][0];
		int ny=y+dir[i][1];
		
		if(nx>0&&ny>0&&nx<=n&&ny<=n)
		{
			if(passed[nx][ny]==1)
			{
				nx -= dir[i][0];
				ny -= dir[i][1];
				continue;
			}
			if(map[x][y]==0)
			{
				if(map[nx][ny]==1)
				{
					passed[nx][ny] = 1;
					block[nx][ny] = d;
					step[d]++;
					dfs(nx,ny);
				}
			}
			else if(map[x][y]==1)
			{
				if(map[nx][ny]==0)
				{
					passed[nx][ny] = 1;
					block[nx][ny] = d;
					step[d]++;
					dfs(nx,ny);
				}
			}
		}
	}
	return 0;
}

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;                                
        for(int j=1;j<=n;j++)
        {
            if(s[j-1]=='0')
            {
                map[i][j]=0;
            }
            else
            {
                map[i][j]=1;
            }
        }
    }

	memset(step,0,sizeof(step));
	memset(block,0,sizeof(block));

	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		if(block[i][j]==0)
		{
			d++;
			dfs(i, j);
		}
	
    for(int i=1;i<=m;i++)
	{
		cin >> a >> b;
		if(step[block[a][b]]!=0)
		cout << step[block[a][b]]<<endl;
		else
			cout << "1" << endl;
	}
    system("pause");
    return 0;
}