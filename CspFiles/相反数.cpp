// http://118.190.20.162/view.page?gpid=T10
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    int a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int re = 0;
    // 因为题目确定每个数各不相同，所以可以不用考虑重复的问题，直接判断即可
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] == (-a[j]))
                re++;
        }
    }
    printf("%d", re);
    return 0;
}
/*
输入即为
5
1 2 3 -1 -2
输出为
2
*/