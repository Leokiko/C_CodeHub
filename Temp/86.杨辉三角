#include<stdio.h>
int main() {
	int a[100][100];
	int n;
	a[1][1]=1;
	a[2][1]=a[2][2]=1;
	a[2][0]=0;
	while(scanf("%d",&n)!=EOF) {
		if(n==0)break;
		int i,j;
		for(i=3; i<=n; i++) {
			a[i][0]=0;
			a[i-1][i]=0;
			for(j=1; j<=i; j++) {
				a[i][j]=a[i-1][j]+a[i-1][j-1];
			}
		}
		for(i=1; i<=n; i++) {
			for(j=1; j<=i; j++) {
				if(j==i)printf("%d",a[i][j]);
				else printf("%d ",a[i][j]);
			}
			printf("\n");
		}


	}
	return 0;
}