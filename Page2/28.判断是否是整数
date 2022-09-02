#include<stdio.h>
#include<string.h>
int main() {
	char a[100]= {0};
	int flag=0,i,k;
	while(scanf("%s",&a)!=EOF) {
		for (i=0; i<strlen(a); i++) {
			if(a[i]=='.') {
				for (k=i+1; k<strlen(a); k++) {
					if(a[k]!='0') {
						flag=1;
						break;
					}
				}
			}
		}
		if(!flag)
			printf("Yes\n");
		else
			printf("No\n");
		flag=0;
	}
	return 0;
}