#include<stdio.h>
int mian(void)
{
    int a,b;
    puts("请输入两个整数。");
    printf("整数a:"); scanf("%d";&a);
    printf("整数b:"); scanf("%d";&b);
    int sum=0;
    max=(a>b)?a:b
    min=(a<b)?a:b
    do{
        sum += min++;
    } while(min <=max);
    printf("大于等于%d小于等于%d的所有整数和是%d。|n",min,max,sum);
    return 0
}


