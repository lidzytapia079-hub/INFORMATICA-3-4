#include <stdio.h>

int main(void){

    int minutes ;
    int starttime;
    printf("Enter the run time of the movie in minutes:\n");
    scanf("%d", &minutes);
    printf("Enter the time you start the movie:\n");
    scanf("%d", &starttime);
    printf("\n");
    int runtime= minutes/60;
    int runtime2=minutes%60;
    int endtime= starttime +runtime;
    int endtime2= starttime +runtime2;
    printf("the run time  of the movie is %d hours and %d minutes\n" , runtime , runtime2);
    printf("you will finish the movie at %d:%d\n", endtime,endtime2);
    }

