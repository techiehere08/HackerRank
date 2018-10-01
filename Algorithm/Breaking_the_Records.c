#include<stdio.h>
int breakingRecords(int n){
long int score[n];
    int i,j,max,min,b=0,w=0;
    for(i=0;i<n;i++){
    scanf("%ld ",&score[i]);
    }
    max=score[0];
    min=score[0];
    for(i=1;i<n;i++){
    if(max<score[i])
    {
        max=score[i];
        b++;
    }
    }
        for(i=1;i<n;i++){
    if(min>score[i])
    {
        min=score[i];
        w++;
    }
    }
    printf("%d %d",b,w);
    return 0;
}
int main(){
    int n;
    scanf("%d\n",&n);
    breakingRecords(n);
    return 0;
}