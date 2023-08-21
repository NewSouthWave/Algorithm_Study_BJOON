#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    int a,b = 1;

    while(a+b!=0){
        scanf("%d %d",&a,&b);

        if(a+b!=0) printf("%d\n",a+b); 

    };

	return 0;
}