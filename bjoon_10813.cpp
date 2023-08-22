#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    int n,m;
    int arr[100] = {0}; // 배열의 초기화
    scanf("%d %d",&n,&m);

     for(int i=1; i <= n;i++){
        arr[i] = i;

    }

    for(int i=1; i <= m;i++){
        int start,end;
        scanf("%d %d",&start,&end);

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

    }

    for(int v = 1; v <= n; v++){
        printf("%d ",arr[v]);
    }



	return 0;
}