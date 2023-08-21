#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>


int main(void){
    int a,b = 1;

    while(scanf("%d %d", &a, &b) != EOF){ //데이터가 주어지지 않아 EOF(End Of File) 에 도달하면 반복문 종료 가능

        printf("%d\n",a+b); 

    }

	return 0;
}
