/*n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.*/
#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);

    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }

    printf("%d", sum);
    
	return 0;
}
