#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);

    int arr[100];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int v;
    scanf("%d",&v);
    int qty = 0;

    for(int i = 0; i < n; i++){
        if(arr[i]==v) qty++;
    }
    printf("%d",qty);


	return 0;
}