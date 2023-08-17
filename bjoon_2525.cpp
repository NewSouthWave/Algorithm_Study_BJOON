#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    int hour,min;
    int cook_time;

    scanf("%d %d %d",&hour,&min,&cook_time);

    if(min + cook_time < 60){
        printf("%d %d",hour, min + cook_time);

    }

    else{
        int cook_hour = cook_time / 60;
        int cook_min = cook_time % 60;
        
        cook_hour = (cook_hour + hour)%24;
        if(min + cook_min <60) {
            printf("%d %d",cook_hour, min + cook_min);
        }
        else printf("%d %d",(cook_hour+1)%24,(min + cook_min)%60);
    }


	return 0;
}