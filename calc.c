#include <stdio.h>
//1.prototype
void multiply( void);
void divide(void);
void add(void);
void substract(void);

int main(void){

    int user_response;
    printf("calculator\n");
    printf("1. Add\n");
    printf("2.Substract\n");
    printf("3.divide\n");
    printf("4.multiply\n");
    printf("Select your option: ");
    scanf("%d",&user_response);
//call
    if (user_response == 1){
        add();
    } else if (user_response == 2){
        substract();
    } else if (user_response==3){
        divide();
    } else if (user_response==4){
        multiply();
    }
    else {
    
        printf("Invalid Response");
    }


}
    //2.define
void add(void){
    int num1;
    int num2;
    printf("enter your first number: ");
    scanf("%d", &num1);
    printf("enter your second number: ");
    scanf("%d", &num2);
    int num3=num2+num1;
    printf("%d \n",num3);
}

void substract(void){
    int num1;
    int num2;
    printf("enter your first number: ");
    scanf("%d", &num1);
    printf("enter your second number: ");
    scanf("%d", &num2);
    int num3=num2-num1;
    printf("%d \n",num3);
}
void divide(void){
    float num1;
    float num2;
    printf("enter your first number: ");
    scanf("%f", &num1);
    printf("enter your second number: ");
    scanf("%f", &num2);
    int num3=num2/num1;
    printf("%f.2 \n",num3);
}
void multiply(void){
    int num1;
    int num2;
    printf("enter your first number: ");
    scanf("%d", &num1);
    printf("enter your second number: ");
    scanf("%d", &num2);
    int num3=num2*num1;
    printf("%d \n",num3);
}
