#include <stdio.h>

int main(void){

    int time;

    printf("Enter the run time of the movie in minutes:\n");
    scanf("%d", &time);

    int start_h;
    int start_m;
    printf("start time :");
    scanf("%d:%d", &start_h, &start_m);


    int time= minutes/60;
    int minutes=minutes%60;

    int endtime_h= start_h +hours;//end_h=8
    int endtime_m= start_m+minutes; //end_m=61

    if(end_m >=60){
        end_h=end_h+(end_m/60);//update variable value
        end_m=end_m % 60;//variable value plus the reminder of 60
    }

    printf("the movie will last %d hours and %d minutes\n" ,  hours, minutes);
    printf("end time: %d:%02d\n", endtime_h,endtime_m);
    }

