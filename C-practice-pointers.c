#include<stdio.h>

int main()
{
    // int a = 10;//申請四個byte
    // //&a取地址
    // int* p = &a;
    // printf("%p\n", &a);
    // printf("%p\n", p);
    // *p = 20;//*引用操作符
    // printf("a = %d\n", a);
    // //一種存放地址的變量，指針變量

    char ch = 'w';
    char *pc = &ch;
    *pc = 'a';
    printf("%d\n", sizeof(pc));
    printf("%c\n",ch);
    return 0;
}
