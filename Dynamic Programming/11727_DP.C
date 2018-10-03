#include <stdio.h>
int main()
{
	int a[1010]={0,1,3};
	int i,n;
	scanf("%d",&n);
	for(i=3; i<=n; ++i)
		a[i]=(a[i-1] + a[i-2]*2)%10007;
	printf("%d",a[n]);
	return 0;
}