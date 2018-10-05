#include <stdio.h>
int main()
{
	int a[11];
	int i,n,k,cnt=0;
	scanf("%d %d",&n,&k);
	for(i=1; i<=n; ++i)scanf("%d",&a[i]);
	i=n;
	while(k>0)
	{
		if(a[i]<=k){
			k-=a[i];
			++cnt;
		}
		else
			i--;
	}
	printf("%d",cnt);
	return 0;
}