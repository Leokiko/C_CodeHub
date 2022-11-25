#include<stdio.h>
int main() {
	int i,a[15];
	for(i=1; i<=10; i++) {
		scanf("%d ",&a[i]);
	}
	int m;
	scanf("%d",&m);
	int d=m+30,sum=0;
	for(i=1; i<=10; i++) {
		if(d>=a[i])sum++;
	}
	printf("%d\n",sum);
	return 0;
}