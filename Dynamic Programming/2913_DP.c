#include <stdio.h>
int main()
{
	long int a[100]={0,1,1,2};
	int i,n;
	scanf("%d",&n);
	for(i=3; i<=n; ++i)a[i]=a[i-1]+a[i-2];
	printf("%lld",a[n]);
	return 0;
}