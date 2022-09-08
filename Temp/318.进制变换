#include<stdio.h>

void two(int n) {
	if(n>1) {
		two(n/2);
	}
	printf("%d",n%2);
}

void eight(int n) {
	if(n>7) {
		eight(n/8);
	}
	printf("%d",n%8);
}
int main() {
	int a;
	while(scanf("%d",&a)!=EOF) {
		two(a);
		printf("\n");
		eight(a);
		printf("\n");
	}
	return 0;
}