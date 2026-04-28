#include <stdio.h>

int main(void){
    float Fahrenheit;
    float Celsius;
    printf("Enter the Temperature in Fahrenheit:\n");
    scanf("%f", &Fahrenheit);
    Celsius =(Fahrenheit-32)/1.8;
    printf("Celsius =%f\n",Celsius);
    //C=-40 = F =-40
}

