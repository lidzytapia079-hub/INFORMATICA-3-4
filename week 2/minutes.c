#include <stdio.h>

int main(void){

    int total_minutes;

    printf("Movie run time:");
    scanf("%d", &total_minutes);

    int start_h;
    int start_m;
    printf("start time :");
    scanf("%d:%d", &start_h, &start_m);


    int hours= total_minutes / 60;
    int min= total_minutes % 60;

    int end_h= start_h + hours;//end_h=8
    int end_m= start_m + min; //end_m=61

    if(end_m >=60){
        end_h=end_h+(end_m/60);//update variable value
        end_m=end_m % 60;//variable value plus the reminder of 60
    }

    printf("the movie will last %d hr and %d mi\n" ,  hours, min);
    printf("end time: %d:%02d\n", end_h,end_m);
    }

