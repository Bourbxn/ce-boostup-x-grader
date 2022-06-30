#include "stdio.h"
int main(){
    int hour,min;
    char ampm[] = "AM";
    scanf("%d.%d",&hour,&min);
    if(hour>24 || hour<1 || min>59){
        printf("ERROR!");
        return 0;
    }
    if(hour>=13){
        hour-=12;
        ampm[0] = 'P';
        if(hour==12){
            hour = 0;
            ampm[0] = 'A';
        }
    }
    else if(hour==12){
        ampm[0] = 'P';
    }
    printf("%02d.%02d %s",hour,min,ampm);
    return 0;
}   