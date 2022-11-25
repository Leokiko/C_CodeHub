#include<stdio.h>
int main() {
	char e;
	int a=0,b=0,c=0,d=0;
	while(e=getchar()) {
		if(e=='\n')break;
		if((e>='A'&&e<='Z')||(e>='a'&&e<='z'))a++;
		else if (e>='0'&&e<='9')b++;
		else if (e==' ')c++;
		else d++;
	}
	printf("%d %d %d %d\n",a,b,c,d);
	return 0;
}