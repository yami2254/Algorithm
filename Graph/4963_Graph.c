#include <stdio.h>
void dfs(int x,int y);
int a[55][55],chk[55][55];
int w,h,cnt;
int main()
{
	int i,j;
	while(1)
	{
		scanf("%d %d",&h,&w);
		if(w+h == 0)break;
		cnt=0;
		for(i=1; i<=w; ++i){
			for(j=1; j<=h; ++j){
				scanf("%d",&a[i][j]);
				chk[i][j]=0;
			}
		}
		for(i=1; i<=w; ++i)
		{
			for(j=1; j<=h; ++j)
			{
				if(a[i][j]==1 && chk[i][j]==0)
				{
					++cnt;
					chk[i][j]=1;
					dfs(i,j);
				}
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}
void dfs(int x,int y)
{
	if(a[x][y]==1 && chk[x][y]==0)
		chk[x][y]=1;
	if(a[x-1][y-1]==1 && chk[x-1][y-1]==0 && x>0 && y>0)dfs(x-1,y-1);
	if(a[x+1][y+1]==1 && chk[x+1][y+1]==0 && x<w && y<h)dfs(x+1,y+1);
	if(a[x-1][y+1]==1 && chk[x-1][y+1]==0 && x>0 && y<h)dfs(x-1,y+1);
	if(a[x+1][y-1]==1 && chk[x+1][y-1]==0 && x<w && y>0)dfs(x+1,y-1);
	if(a[x+1][y]==1 && chk[x+1][y]==0 && x<w)dfs(x+1,y);
	if(a[x-1][y]==1 && chk[x-1][y]==0 && x>0)dfs(x-1,y);
	if(a[x][y+1]==1 && chk[x][y+1]==0 && y<h)dfs(x,y+1);
	if(a[x][y-1]==1 && chk[x][y-1]==0 && y>0)dfs(x,y-1);
}