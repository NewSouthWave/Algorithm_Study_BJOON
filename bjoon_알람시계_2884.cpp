#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    int set_hour,set_min;

    scanf("%d %d",&set_hour,&set_min);

    if(set_min >= 45){
        printf("%d %d",set_hour,set_min-45);
    }

    else{
        if(set_hour > 0) printf("%d %d",set_hour-1,set_min+15);
        else printf("23 %d", set_min+15);
    }

	return 0;
}