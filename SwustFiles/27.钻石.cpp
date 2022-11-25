#include<stdio.h>
int main() {
	int v,e;
	while(scanf("%d %d",&v,&e)!=EOF) {
		int r;
		r=v+2-e;
		printf("%d\n",r);
	}
	return 0;
}
//欧拉公式 点+面-棱=2