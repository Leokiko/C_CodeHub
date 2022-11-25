#include<stdio.h>
int main() {
	int i,n,m,r=0;
	scanf("%d %d",&n,&m);
	for(i=2; i<=n; i++) {
		r=(r+m)%i;
	}
	printf("%d\n",r+1);
	return 0;
}