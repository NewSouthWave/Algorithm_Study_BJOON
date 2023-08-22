#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    int arr[10];

    for(int i = 0; i < 9; i++){
        scanf("%d",&arr[i]);
    }

    int num = 0, max = 0;

    for(int i = 0; i < 9; i++){
        if(arr[i] > max){
            max = arr[i];
            num = i + 1;
        }
    }

    printf("%d\n%d", max, num);
    
	return 0;
}