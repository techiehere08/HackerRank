#include<stdio.h>
int main()
{
    int i,j,arr[150][150],k,diff,sum=0,sum1=0,n;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            
        }
        }   
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i][i];
            
            sum1=sum1+arr[i][n-i-1];
        }
            diff=sum-sum1;
        if(diff<0)
            diff=-diff;
    printf("%d",diff);
    return 0;
}
