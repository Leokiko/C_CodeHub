// http://118.190.20.162/view.page?gpid=T148
#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	double a[1000] = {0};
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%lf", &a[i]);
	}
	// a_是公式得到的
	double a_ = 0;
	for (int i = 0; i < n; i++)
	{
		a_ += a[i];
	}
	a_ /= n;
	// A也是公式得到的
	double A = 0;
	for (int i = 0; i < n; i++)
	{
		A += ((a[i] - a_) * (a[i] - a_));
	}
	A *= (1 / (double)n);

	for (int i = 0; i < n; i++)
	{
		printf("%lf.17\n", (a[i] - a_) / sqrt(A));
	}
	return 0;
}

/*
样例输入
7
-4 293 0 -22 12 654 1000
样例输出
-0.7485510379073613
0.04504284674812264
-0.7378629047806881
-0.7966476369773906
-0.7057985054006686
1.0096468614303775
1.9341703768876082
*/