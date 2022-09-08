#include<stdio.h>
int a[100],max=0,i,t;
int main() {
	char s[100];
	int n;
	while(scanf("%d",&n)!=EOF) {
		scanf("%s",s);
		for(i=0; i<n; i++) {
			a[s[i]-'a']++;
		}
		for(i=0; i<=26; i++) {
			if(a[i]>max) {
				max=a[i];
				t=i;
			}
		}
		printf("%c\n",t+'a');
	}
	return 0;
}