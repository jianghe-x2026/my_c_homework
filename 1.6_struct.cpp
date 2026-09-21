#include <stdio.h>
#include <string.h>
struct Student
{
    char name[20];
    int score;
};
int main()
{
    int x,n;
    printf("输入录入数量:");
    if(scanf("%d",&x)!=1)return 1;
    if(x==0)
    {
        printf("error");
        return 1;
    }
    struct Student students[x];
    for(int i=0;i<x;i++)
    {
        printf("输入第%d个学生信息\n",i+1);
        printf("姓名：");
        scanf("%s",students[i].name);
        printf("分数：");
        scanf("%d",&students[i].score);
    }
    while(1)
    {
        printf("查询\n");
        printf("请输入学生名字：");
        char target[20];
        scanf("%s",target);
        for(int i=0;i<x;i++)
        {
            if(strcmp(students[i].name, target)==0 )
            {
                printf("%s的分数为:%d\n",target,students[i].score);
            }
        }
        printf("是否继续查询:1.是 2.否\n");
        scanf("%d",&n);
        if(n==2)
        {
            break;
        }
    }
    return 0;
}