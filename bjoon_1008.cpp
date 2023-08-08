#include <stdio.h>

// 1001,10998,1008 모두 포함
int main(void){
    double a,b; //실수로 변수 선언
  scanf("%lf %lf",&a,&b);
  
  printf("%.13lf\n",a/b); //오차 범위가 10^-9 이하여야 하므로 10자리 이상 출력한다 *여기선 여유있게 13자리로 함
  return 0; 
}