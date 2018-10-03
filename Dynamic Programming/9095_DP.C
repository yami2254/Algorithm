#include <stdio.h>
int main()
{
	int a[1010]={0,1,2,4};
	int i,j,T,n;
	scanf("%d",&T);
	for(i=1; i<=T; ++i)
	{
		scanf("%d",&n);
		for(j=4; j<=n; ++j)
			a[j]=a[j-1]+a[j-2]+a[j-3];
		printf("%d\n",a[n]);
	}
	return 0;
}