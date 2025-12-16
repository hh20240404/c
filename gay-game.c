shu#include <stdio.h>

int main ()
{
    //1
    first:
    printf("开始请按1，退出请按2\n");
    int input_1;
    scanf("%d" , &input_1);
    if (input_1 == 1)
    {
        goto start;
    }
    if (input_1 == 2)
    {
        goto end;
    }
    if (input_1 != 1 && input_1 != 2)
    {
        printf("请重试\n");
        goto first;
    }
    start:
        int day;
        printf("请输入你的生日(例：十月十日输入1010)：");
        scanf("%d" , &day);
        if (day % 2 == 0)
        {
            printf("你不是gay");
        }
        else
        {
            printf("你是gay");
        }
        int input_2;
        printf("\n再来一次输入1，结束输入任意数字\n");
        scanf("%d" , &input_2);
        if (input_2 == 1)
        {
            goto start;
        }
     end:
         printf("游戏结束");
    return 0;
}

