#include<stdio.h>
#include<stdlib.h>

struct Book
{
    char name[20];
    short price;
};

int main()
{
    struct Book b1 = {"C fundamentals", 550};
    struct Book* pb = &b1;
    //利用pb印出書名價格
    printf("%s\n", (*pb).name); // .可找到成員
    printf("%d\n", (*pb).price);

    printf("%s\n", pb->name); //更直觀寫法
    printf("%d\n", pb->price); //->結構體指針成員

    printf("%d\n", sizeof(pb));
    printf("Book name: %s\n", b1.name);
    printf("price: %d\n", b1.price);
    return 0;
}