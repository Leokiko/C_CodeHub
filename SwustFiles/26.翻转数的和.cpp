#include<stdio.h>
int main() {
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF) {
		int c=0,d=0;
		while(a!=0) {
			c=c*10+a%10;
			a/=10;
		};
		while(b!=0) {
			d=d*10+b%10;
			b/=10;
		};
		printf("%d\n",c+d);
	};
	return 0;
}