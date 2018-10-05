#include <stdio.h>
int main() {

	int n , i;
	int max1,max2,pos1,pos2;

	scanf("%d", &n);
	max1 = n;
	pos1 = 1;
	scanf("%d", &n);
	if (n > max1) {
		max1 = n;
		pos1 = 2;
		max2 = max1;
		pos2 = 1;
	}
	else {
		max2 = n;
		pos2 = 2;
	}

	for (i = 3; i <= 5; i++) {
		scanf("%d", &n);
		if (n > max1) {
			max2 = max1;
			max1 = n;
			pos2 = pos1;
			pos1 = i;
		}
		else if (n > max2) {
			max2 = n;
			pos2 = i;
		}
		else
			continue;
	}
	printf("%d %d\n", max1, pos1);
	printf("%d %d", max2, pos2);

	return 0;
}