#include<stdio.h>
int main() {
	int n,r=1;
	scanf("%d",&n);
	for(int i=n; i>1; i--) {
		r=(r+1)*2;
	}
	printf("%d\n",r);
	return 0;
}