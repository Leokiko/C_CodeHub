#include<stdio.h>
int main() {
	int n,a[100],male=0,female=0;
	scanf("%d",&n);
	int i;
	for(i=1; i<=n; i++) {
		scanf("%d",&a[i]);
	}
	for(i=1; i<=n; i++) {
		if(a[i]==0)male++;
		else female++;
	}
	printf("%d %d\n",male,female);
	return 0;

}