#include<stdio.h>
#include<math.h>
int main() {
	float n;
	scanf("%f",&n);
	float x1,x2;
	x1=n/2;
	x2=(x1+n/x1)/2;
	while(fabs(x1-x2)>0.00001) {
		x1=x2;
		x2=(x1+n/x1)/2;
	}
	printf("%.3f\n",x2);
	return 0;
}