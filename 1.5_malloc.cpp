#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("要几个数：");
    if(scanf("%d",&n)!=1)return 1;

    int *arr =(int*)malloc(n*sizeof(int));
    if(arr == NULL)
    {
        printf("内存不足");
        return 1;
    }

    for(int i=0;i<n;i++)
    {
        printf("第%d个数:",i+1);
        scanf("%d",&arr[i]);
    }
    int x=0;
    for(int i=0;i<n;i++)
    {
        x=x+arr[i];

    }
    float t;
    t=(float)x/n;
    printf("平均数：%f",t);
    free(arr);
    arr=NULL;
    return 0;
}