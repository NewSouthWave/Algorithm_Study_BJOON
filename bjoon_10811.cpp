#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    int bucket[110];

    for(int a=1; a<=n; a++){
        bucket[a]=a;
    }

    for(int z=0;z<m;z++){
        int i,j;
        scanf("%d %d",&i,&j);

        if(i!=j){
            for(int k=0; k<=(j-i)/2; k++){
                int temp = bucket[j-k];
                bucket[j-k]=bucket[i+k];
                bucket[i+k]=temp;
        }
        }

    }

    for(int q=1; q<=n; q++){
        printf("%d ",bucket[q]);
    }

	return 0;
}