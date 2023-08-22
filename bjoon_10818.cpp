#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);

    int arr[1000000];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int min= 1000000;
    int max = -1000000;

    for(int i = 0; i <= n-1; i++){
        if(arr[i] < min) {
            min = arr[i];
        }
       /* else{
            int temp = arr[i+1];
            if(temp <= min) min = temp;
        }*/
       
      
    }

    for(int i = 0; i <= n-1; i++){
        if( max < arr[i]) {
            max = arr[i];
        }
        /*
    for(int i = 0; i <= n-2; i++){
        if(arr[i] < arr[i+1]) {
            int temp = arr[i+1];
            if(temp > max) max = temp;
            
        }
        */
        /* else{
            int temp = arr[i];
            if(temp >= max) max = temp;
        }*/
    }
    
    printf("%d %d", min, max);
    
	return 0;
}