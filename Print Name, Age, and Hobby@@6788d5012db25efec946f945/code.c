#include <stdio.h>
void main()
{
    char name[100];
    int age;
    char hobby[100];
    scanf("%c",&name);
    scanf("%d",&age);
    scanf("%c",&hobby);
    printf("%c \n%d \n%c",name,age,hobby);
    return 0;
}