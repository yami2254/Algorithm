#include <stdio.h>
int main()
{
	int a[1010][4];
	int i,j,n,min;
	scanf("%d",&n);
	for(i=1; i<=n; ++i)
		for(j=1; j<=3; ++j)
			scanf("%d",&a[i][j]);
	for(i=2; i<=n; ++i)
	{
		if(a[i-1][2] < a[i-1][3])
			a[i][1]+=a[i-1][2];
		else a[i][1] +=a[i-1][3];

		if(a[i-1][1] < a[i-1][3])
			a[i][2] +=a[i-1][1];
		else
			a[i][2] +=a[i-1][3];

		if(a[i-1][1] < a[i-1][2])
			a[i][3] += a[i-1][1];
		else
			a[i][3] += a[i-1][2];
	}
	min=a[n][1];
	for(i=2; i<=3; ++i)
	{
		if(min>a[n][i])
			min=a[n][i];
	}
	printf("%d",min);
	return 0;
}