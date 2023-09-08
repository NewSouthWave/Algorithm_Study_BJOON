#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    double n;
    double score[1001];
    double max=0;

    scanf("%lf",&n);

    for( int i=0; i<n; i++){
        scanf("%lf",&score[i]);
        if(score[i]>max) max=score[i];
    }

    double new_score[1001];
    double sum=0;

    for( int i=0; i<n; i++){
        new_score[i]=score[i]/max*100;
        sum+=new_score[i];
    }

    double avg = sum/n;

    printf("%lf", avg);



	return 0;
}