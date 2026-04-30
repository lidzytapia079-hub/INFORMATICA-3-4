#include <stdio.h>

int main(void){

    int minutes ;

    printf("Enter the run time of the movie in minutes:\n");
    scanf("%d", &minutes);

    int start_h;
    int start_m;
    printf("start time :");
    scanf("%d:%d", &start_h, &start_m);


    int hours= minutes/60;
    int minutes=minutes%60;

    int endtime_h= start_h +hours;
    int endtime_m= start_m+minutes;

    printf("the movie will last %d hours and %d minutes\n" ,  hours, minutes);
    printf("end time: %d:%d\n", endtime_h,endtime_m);
    }

