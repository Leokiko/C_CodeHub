#include<stdio.h>
int main() {
	char n;
	n=getchar();
	if(n<32)printf("This is a control character.");
	else if('0'<=n&&n<='9')printf("This is a digit.");
	else if('A'<=n&&n<='Z')printf("This is a capital letter.");
	else if('a'<=n&&n<='z')printf("This is a small letter.");
	else printf("This is an other character.");
	return 0;
}