#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    int n, x;
    scanf("%d %d",&n, &x);

    int arr[100000];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(arr[i] < x) printf("%d ",arr[i]);
    }


	return 0;
}