#include<stdio.h>
int main() {
	int a,b,flag=0,t;
	scanf("%d %d",&a,&b);
	for(int i=a; i<b; i++) {
		t=1;
		for(int j=2; j<i; j++) {
			if(i%j==0)t=0;
		}
		if(t) {
			if(flag!=4) {
				flag++;
				printf("%d ",i);
			} else {
				flag=0;
				printf("%d \n",i);
			}
		}
	}
	return 0;
}