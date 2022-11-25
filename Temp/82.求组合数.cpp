#include<stdio.h>
int C(int a,int b) {
	if(b==0) return 1;
	if(b==1)return a;
	return C(a,b-1)*(a-b+1)/b;
}
int main() {
	int n,r;
	while(scanf("%d %d",&n,&r)!=EOF) {
		if(n==0 && r==0)break;
		else if(n<r)printf("error!\n");
		else printf("%d\n",C(n,r));
	}
	return 0;

}