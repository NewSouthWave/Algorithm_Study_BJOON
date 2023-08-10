#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>
int main(void){
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);
    int fx1 = (a+b)%c;
    int fx2 = ((a%c)+(b%c))%c;
    int fx3 = (a*b)%c;
    int fx4 = ((a%c)*(b%c))%c;

    printf("%d\n",fx1);
    printf("%d\n",fx2);
    printf("%d\n",fx3);
    printf("%d\n",fx4);


    return 0;
}