#include<stdio.h>
int main() {
	int x,y=0;
	scanf("%d",&x);
	if(x<1) {
		y=x;
	} else if(1<=x&&x<10) {
		y=2*x-1;
	} else
		y=3*x-11;
	printf("%d\n",y);
	return 0;
}