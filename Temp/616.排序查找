#include <stdio.h>
int main() {
	int N,m,i,j,a[50],max,k=0;
	scanf("%d",&N);
	for(i=0; i<N; i++) {
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0; i<N; i++) {
		for(j=i+1; j<N; j++) {
			if(a[i]<a[j]) {
				max=a[j];
				a[j]=a[i];
				a[i]=max;
			}
		}
	}
	for(i=0; i<N; i++) {
		if (m!=a[i])
			continue;
		if(m=a[i]) {
			k=i+1;
			break;
		}
	}
	for(i=0; i<N; i++) {
		if(i!=N-1) {
			if(i%10==9)
				printf("%d\n",a[i]);
			else
				printf("%d ",a[i]);
		} else
			printf("%d\n",a[i]);
	}
	if(k>0)
		printf("%d\n",k);
	else
		printf("no this score!\n");
	return 0;
}