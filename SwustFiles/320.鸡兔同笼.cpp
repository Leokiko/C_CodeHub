#include<stdio.h>
int main() {
	int a[65535],n,max,min,i;
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		scanf("%d",&a[n]);
		if(a[n]%2==0) {
			max=a[n]/2;
			if (a[n]%4==0)
				min=a[n]/4;
			else
				min=a[n]/4+1;
			printf("%d %d\n",min,max);
		} else
			printf("0 0\n");
	}
	return 0;
}