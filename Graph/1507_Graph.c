#include <stdio.h>
int main()
{
	int a[22][22], b[22][22];
	int i, j, k, n;
	scanf("%d", &n);
	for (i = 1; i<=n; ++i)
	{
		for (j = 1; j <= n; ++j)
		{
			scanf("%d", &a[i][j]);
			b[i][j] = a[i][j];
		}
	}
	for (k = 1; k <= n; ++k)
	{
		for (i = 1; i <= n; ++i)
		{
			for (j = 1; j <= n; ++j)
			{
				if (a[i][j] > (a[i][k] + a[k][j]))
				{
					printf("-1");
					return 0;
				}
				if (i == j || i == k || j == k)continue;
				if (a[i][j] == (a[i][k] + a[k][j]))
					b[i][j] = 0;
			}
		}
	}
	for (i = 1; i <= n; ++i)
	{
		for (j = i+1; j <= n; ++j)
		{
			if (b[i][j])
				b[n][n] += a[i][j];
		}
	}
	printf("%d", b[n][n]);
	return 0;
}