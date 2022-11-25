#include <stdio.h>
int a[10001]={0};
int main()
{
    int i,j,n,m,k,b,c,sum=0;
    scanf("%d%d",&n,&m);
        sum=0;
        for(i=0;i<=n;i++)
        {
            a[i]=1;
        }
        for(i=0;i<m;i++)
        {
            scanf("%d%d",&b,&c);
            if(c>b)
            {
                k=b;
                b=c;
                c=k;
            }
            for(j=c;j<=b;j++)
            {
                a[j]=0;
            }
        }
        for(j=0;j<=n;j++)
        {
            sum+=a[j];
        }
        printf("%d\n",sum);
    return 0;
}