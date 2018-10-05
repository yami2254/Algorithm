#include <stdio.h>
int main()
{
	int a[1010];
	int i,j,n,tmp,sum=0;
	scanf("%d",&n);
	for(i=1; i<=n; ++i)scanf("%d",&a[i]);

	for(i=1; i<n; ++i)
	{
		for(j=i+1; j<=n; ++j)
		{
			if(a[i]>a[j]){tmp=a[i]; a[i]=a[j]; a[j]=tmp;}
		}
	}
	for(i=1; i<=n; ++i)
	{
		sum += (a[i]*(n-i+1));
	}
	printf("%d",sum);
	return 0;
}