#include <stdio.h>

int main(void){
    long long a,b,c; // 10^12 가 범위이므로 자료형을 long long으로 선언해야 함

    scanf("%lld %lld %lld",&a,&b,&c); // long long의 서식지정자는 %lld 이다

    printf("%lld\n",a+b+c);

	return 0;
}