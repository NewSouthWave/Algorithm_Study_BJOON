#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    int arr[20]={0};

    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);
    }
    
    int remain[42]={0};
    /*[중복검사 방법]
    - 0부터 41까지의 나머지를 담는 배열을 선언한다(int나 bool)
    - 각 입력값의 나머지 n을 n번째 인덱스에 1 혹은 true로 대입시킨다
    - 반복문을 통해 1 혹은 true인 배열만 카운트해서 숫자를 새어준다
    */

    for(int i=0; i<10; i++){
        int temp = arr[i]%42;
        remain[temp]=1; 
    }

    int cnt=0;

    for(int i=0; i<42; i++){
        if(remain[i]==1) cnt++;
    }

    printf("%d",cnt);

	return 0;
}
