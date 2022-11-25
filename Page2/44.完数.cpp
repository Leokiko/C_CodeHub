/*
#include<stdio.h>
int main() {
	int n,s;
	scanf("%d",&n);
	for(int i=0; i<=n; i++) {
		s=0;
		for(int j=0; j<=(i/2); j++) {
			for(int k=0; k<=i; k++) {
				if((j*k)==i)
                    s+=j;
			}
		}
		if((i==s)&&(s!=0)) {
			printf("%d its fastors are ",i);
			for(int j=0; j<=(i/2); j++) {
				for(int k=0; k<=i; k++) {
					if((j*k)==i)
						printf("%d ",j);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
*/

#include<stdio.h>
int main() {
	int n,s;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		s=0;
		for(int j=1; j<i; j++) {
			if(i%j==0)
				s+=j;
		}
		if((i==s)&&(s!=0)) {
			printf("%d its fastors are 1",i);
			for(int j=2; j<i; j++) {
				if(i%j==0)
					printf(" %d",j);
			}
			printf("\n");
		}
	}
	return 0;
}