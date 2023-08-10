#include <stdio.h>

int main(void){
    double a,b;
    
    scanf("%lf %lf",&a,&b);

    printf("%.0lf\n",a+b);
    printf("%.0lf\n",a-b);
    printf("%.0lf\n",a*b);
    printf("%.0lf\n",a/b);

    int c= a;
    int d=b;
    printf("%d\n",c%d);


    return 0;
}