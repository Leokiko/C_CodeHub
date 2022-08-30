#include<stdio.h>
int main() {
	int a,b,max,min;
	scanf("%d %d",&a,&b);
	max=(a>b)?a:b;
	min=(a<b)?a:b;
	int r1=1,r2=max;
	for(int i=1; i<min; i++) {
		if(min%i==0&&max%i==0)
			r1=i;
	}
	for(int i=min; ; i++) {
		if(i%min==0&&i%max==0) {
			r2=i;
			break;
		}

	}
	printf("%d ",r1);
	printf("%d\n",r2);
	return 0;
}