#include <stdio.h>

int main(void)
{
    char name[50];
    printf("enter your name: ");
    scanf("%s", &name);
    printf("Hello %s!\n", name);
    char color[50];
    printf("enter your favorite color");
    scanf("%s", &color);
    printf("favorite %s!\n", color);
}
