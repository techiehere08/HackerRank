#include<stdio.h>
long int bonAppetit(long int n,long int k){
    long int bill[n],b,cal,i,sum=0,can;
    for(i=0;i<n;i++){
    scanf("%ld",&bill[i]);
    }
    scanf("%ld",&cal);
        for(i=0;i<n;i++){
        if(i!=k)
            sum=sum+bill[i];
    }
    sum=sum/2;
    if(cal==sum)
        printf("Bon Appetit");
    else 
        printf("%ld",cal-sum);
    return 0;
}
int main(){
    long int n,k;
    scanf("%ld%ld",&n,&k);
    bonAppetit(n,k);
    return 0;
}