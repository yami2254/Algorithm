#include <stdio.h>
int main()
{
	int a[41][2]={{1,0},{0,1},{1,1},{1,2}};
	int T,n,i,j;
	scanf("%d",&T);
	for(i=1; i<=T; ++i)
	{
		scanf("%d",&n);
		for(j=4; j<=n; ++j){
			a[j][0] = a[j-1][0] + a[j-2][0];
			a[j][1] = a[j-1][1] + a[j-2][1];
		}
		printf("%d %d\n",a[n][0],a[n][1]);
	}
	return 0;
}