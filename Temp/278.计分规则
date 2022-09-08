#include<stdio.h>
int main() {
	int n,i,min,max,a[100];
	double average,sum;
	while(scanf("%d",&n)!=EOF) {
		for(i=0; i<n; i++)
			scanf("%d",&a[i]);
		{
			sum=0;
			min=a[0];
			max=a[0];
			for(i=0; i<n; i++) {
				if(a[i]>max)
					max=a[i];
				if(a[i]<min)
					min=a[i];
			}
			for(i=0; i<n; i++)
				sum=sum+a[i];
			pingjun=(sum-min-max)/(n-2);
		}
		printf("%.2lf\n",average);
	}
	return 0;
}