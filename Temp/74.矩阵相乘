#include<stdio.h>
int main() {
	int a[3][3]= {0};
	int b[3][3]= {0};
	int c[3][3]= {0};
	int i,j,k;
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++)
			scanf("%d",&b[i][j]);
	}
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++)
			for(k=0; k<3; k++)
				c[i][j]+=a[i][k]*b[k][j];
	}
	for(i=0; i<3; i++)
		for(j=0; j<3; j++) {
			if(j==2)
				printf("%d \n",c[i][j]);
			else if(j<2)
				printf("%d ",c[i][j]);
		}
	return 0;
}