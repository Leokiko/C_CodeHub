#include<stdio.h>
int main() {
	char a[2000];
	int i,j,m,n;
	scanf("%s",a);
	for(i=0; a[i]!='\0'; i++) {
		if(a[i]>='a'&&a[i]<='z')
			printf("%c",a[i]+('A'-'a'));
		if(a[i]>='A'&&a[i]<='Z')
			printf("%c",a[i]+('a'-'A'));
	}
	printf("\n");
	return 0;
}