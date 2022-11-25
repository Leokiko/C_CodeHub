#include<stdio.h>
int main() {
	float m,n;
	scanf("%f %f",&m,&n);
	float r=0;
	for(float i=1; i<=n; i++) {
		r+=m*3/2;
		if(i==n)printf("%.2f ",m/2);
		m/=2;
	}
	printf("%.2f\n",r-m);
	return 0;
}