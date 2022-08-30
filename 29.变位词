#include<stdio.h>
#include<string.h>
int main() {
	int i,j,k,n,flag;
	scanf("%d",&n);
	for(k=0; k<n; k++) {
		char a[100]= {0};
		char b[100]= {0};
		scanf("%s %s",a,b);
		flag=0;
//		getchar();
		for(i=0; i<strlen(a); i++) {
			for(j=0; j<strlen(a); j++) {
				if(a[i]==b[j]) {
					b[j]='0';
					break;
				};
			}
		}
		for(i=0; i<strlen(a); i++) {
			if(b[i]!='0') {
				flag=1;
			};
		}
		if(!flag)printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}