#include <stdio.h>

int main() 
{
    //如果输入的str长度大于6，会往下填充
    char str[] = "hello";
    char *str2 = "world";
    char str3[10];
    printf("input the value \n"); 
    scanf("%s",str);
    printf("str is %s\n",str);
    printf("str2 is %s\n",str2);
    printf("str3 is %s\n",str3);
    return 0;
}