#include<stdio.h>
int main() {
	int a,b,i,j,flag;
	while(scanf("%d %d",&a,&b)) {
		if(a==0&&b==0)
			return 0;
		else
			flag=1;
		for(i=a; i<=b; i++) {
			j=i;
			int q,w,e;
			e=j%10;
			j/=10;
			w=j%10;
			j/=10;
			q=j;
			if(i==(e*e*e+w*w*w+q*q*q)) {
				printf("%d ",i);
				flag=0;
			}
		}
		if(flag)
			printf("no");
		printf("\n");
	}
}