#include<stdio.h>
int main() {
	int a,n,r=0,s;
	scanf("%d %d",&a,&n);
	s=a;
	for(int i=0; i<n; i++) {
		r=r+a;
		a=a*10+s;
	}
	printf("%d\n",r);
	return 0;
}