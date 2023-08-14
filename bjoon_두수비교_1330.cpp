#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d %d",&a,&b);

    if(a>b){
        printf(">\n");
    }

    else if(a<b){
        printf("<\n");
    }

    else if(a==b){
        printf("==\n");
    }

    else
        return 1;
        
	return 0;
}