#include<stdio.h>
int main() {
	char s[1000];
	int i,t=1;
	scanf("%s",s);
	for(i=0; s[i]!='\0'; i++) {
		if(s[i]==s[i+1])
			t++;
		else {
			printf("%d%c",t,s[i]);
			t=1;
		}
	}
	printf("\n");
	return 0;
}