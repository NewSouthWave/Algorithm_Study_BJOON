#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    int arr[40]={0};

    for(int i=0; i<28; i++){
        scanf("%d",&arr[i]);
    }

    int temp[40]={0};

    for(int j=1; j<=30; j++){
        temp[j]=j;
    }

    for(int j=1; j<=30; j++){
        for(int k=0; k<28; k++){
            if(arr[k]==j) temp[j]=0;
        }
    }

    int a=0,b=0;

    for(int i=1; i<=30; i++){
        if(temp[i]!=0){
            if(a==0) a=i;
            else b=i;
        }
    }

    if(a>b) printf("%d\n%d",b,a);
    else printf("%d\n%d",a,b);

	return 0;
}