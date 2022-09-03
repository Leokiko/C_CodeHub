#include<stdio.h>
int main() {
	int a[8];
	int flag,r;
	for(int i=0; i<8; i++) {
		if(i==7) {
			scanf("%d",&a[i]);
			break;
		}
		scanf("%d",&a[i]);
		getchar();
		getchar();
	}
	for(int i=0; i<7; i++) {
		flag=1;
		r=0;
		for(int j=i; j<8; j++) {
			if(a[i]<a[j]) {
				printf("%d, ",r);
				flag=0;
				break;
			}
			r++;
		}
		if(flag)printf("0, ");
	}
	printf("0\n");
	return 0;
}