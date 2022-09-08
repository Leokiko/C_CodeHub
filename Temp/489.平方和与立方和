#include <stdio.h>
int main() {
	int x, y, i, sum1, sum2;
	while (scanf("%d %d", &x, &y) == 2) {
		if (x > y) {
			i = x;
			x = y;
			y = i;
		}
		sum1 = 0;
		sum2 = 0;
		for (i=x; i<=y; i++)
			if ((i&1) == 0)
				sum1 += i*i;
			else
				sum2 += i*i*i;
		printf("%d %d\n", sum1, sum2);
	}
	return 0;
}