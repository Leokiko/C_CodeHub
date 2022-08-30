#include<stdio.h>
#include<string.h>
//using namespace std;
int main() {
	char a[100]= {0},b[100]= {0};
	char c[100]= {0};
	scanf("%s",a);
	getchar();
	scanf("%s",b);
//	printf("%d %d\n",al,bl);
	int al=strlen(a);
	int bl=strlen(b);
	int l=(al<bl)?al:bl;
	int h=(al>bl)?al:bl;
	int i=0,j=0;

	if(al>bl) {
		for(i=h-1,j=l-1; j>=0; i--,j--) {
			c[i]=a[i]+b[j]-'0';
		};
		for(i=h-l-1; i>=0; i--) {
			c[i]=a[i];
		};
	} else {
		for(i=h-1,j=l-1; j>=0; i--,j--) {
			c[i]=a[j]+b[i]-'0';
		};
		for(i=h-l-1; i>=0; i--) {
			c[i]=b[i];
		};
	};

	for(i=h; i>0; i--) {
		if(c[i]>'9') {
			c[i]-=10;
			c[i-1]++;
		}
	};

	if(c[0]>'9') {
		printf("1");
		c[0]-=10;
	};
	for(i=0; i<h; i++) {
		printf("%c",c[i]);
	}
	return 0;
}