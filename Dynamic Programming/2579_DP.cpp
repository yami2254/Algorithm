#include <stdio.h>
int main()
{
	int a[301],d[301]={0};
	int n,i;
	scanf("%d",&n);
	for(i=1; i<=n; ++i)
		scanf("%d",&a[i]);
	d[1]=a[1];
	d[2]=a[1]+a[2];
	d[3]=(a[1]+a[3]) > (a[2]+a[3]) ? (a[1]+a[3]) : (a[2]+a[3]);
	for(i=4; i<=n; ++i)
	{
		if(d[i-2] > a[i-1]+d[i-3])
			d[i]= d[i-2]+a[i];
		else 
			d[i] = d[i-3]+a[i]+a[i-1];
	}
	printf("%d",d[n]);
	return 0;
}