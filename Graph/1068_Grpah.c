#include <stdio.h>
void dfs(int p);
int a[55][55];
int main()
{
	
	int n,x;
	int i,j;
	scanf("%d",&n);
	for(i=1; i<=n; ++i)
	{
		scanf("%d",&x);
		if(x>=0){
			x++;
			a[x][++a[x][0]]=i;
		}
	}
	for(i=1; i<=n; ++i)
		if(a[i][0]==0)
			a[i][0]=-1;
	scanf("%d",&x);
	x++;
	dfs(x);
	x=0;
	for(i=1; i<=n; ++i)
	{
		printf("%d => %d :",i,a[i][0]);
		for(j=1; j<=a[i][0]; ++j)
			printf(" %d",a[i][j]);
		printf("\n");
	}
	return 0;
}
void dfs(int p)
{
	int i;
	if(a[p][0]==0)
	{
		a[p][0]=-1;
		return ;
	}
	else
	{
		for(i=a[p][0]; i>=1; --i)
		{
			dfs(a[p][i]);
			a[p][i]=0;
			a[p][0]--;
		}
	}
	
	
}