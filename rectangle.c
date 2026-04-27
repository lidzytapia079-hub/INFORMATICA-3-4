#include <stdio.h>

int main(void){
    int width;
    int length;
    printf("Enter length of the rectangle: \n");
    scanf("%d", &length);
    printf("Enter width of the rectangle: \n");
    scanf("%d", &width);
    int Area =length*width;
    int Perimetrer =(length+width)*2;
    printf("Area = %d\n", Area);
    printf("perimetrer= %d\n", Perimetrer);

}

