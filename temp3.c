#include <stdio.h>
//1. prototype
void c_to_f(void);
void f_to_c(void);

int main(void){
 //3-call
printf("temperature converter\n");
printf("1. celsius to fahrenheit\n");
printf("2. fahrenheit to celsius\n");
printf("enter your option:");
int user_response;
scanf("%d", &user_response);

if(user response==1){
//
}
}

//2. define
void c_to_f(void){
float celsius;
printf("enter  your temperature in celsius:");
scanf("%f", &celsius);
float Fahrenheit=(celsius*1.8)+32;
printf("%.2fC \n", Fahrenheit);
}

void f_to_c(void){
float f ;
printf("enter  your temperature in Fahrenheit:");
scanf("%f", &f);
float c=(f-32)/1.8;
printf("%.2fC \n", c);
}
