#include <stdio.h>
int a[510][510], chk[510];
int cnt;
void dfs(int p, int c);
int main()
{
	int i;
	int k, n;
	int x, y;
	scanf("%d %d", &k, &n);
	for (i = 1; i <= n; ++i)
	{
		scanf("%d %d", &x, &y);
		a[x][++a[x][0]] = y;
		a[y][++a[y][0]] = x;
	}
	chk[1] = 1;
	dfs(1, 0);
	printf("%d", cnt);
	return 0;
}
void dfs(int p, int c)
{
	int i;
	if (c == 2)return;

	for (i = 1; i <= a[p][0]; ++i)
	{
		if (chk[a[p][i]] == 0)
		{
			++cnt;
			chk[a[p][i]] = 1;
		}
		dfs(a[p][i], c + 1);
	}
}