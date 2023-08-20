#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    int X,N;
    scanf("%d %d",&X, &N);

    int total = 0;

    for(int i = 0; i < N ; i++){
        int price,qty;
        scanf("%d %d", &price, &qty);
        total += price * qty;
    }

    if(total == X) printf("Yes\n");
    else printf("No\n");


	return 0;
}