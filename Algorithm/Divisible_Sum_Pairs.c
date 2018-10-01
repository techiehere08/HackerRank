#include<stdio.h>
int divisibleSumPairs(int n,int k){
    int ar[n],i,j,sum,c;
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((ar[i]+ar[j])%k==0)
                c++;
        }
    }
    printf("%d",c);
    return 0;
}
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    divisibleSumPairs(n,k);
    return 0;
}