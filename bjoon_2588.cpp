#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    int num1,num2;

    scanf("%d %d",&num1,&num2);

    int result_3 = num1 * (num2%10);
    int result_4 = num1 * (num2%100/10);
    int result_5 = num1 * (num2/100);
    int result_6 = num1 * num2;

    printf("%d\n%d\n%d\n%d",result_3,result_4,result_5,result_6);



    return 0;
}