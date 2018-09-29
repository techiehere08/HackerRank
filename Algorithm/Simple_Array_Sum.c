#include<stdio.h>
int simpleArraySum(int n){
    int i,sum=0;
    int ar[1000];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
     //   printf("%d ",ar[i]);
    }
    return(sum);
}
main()
{
    int n,s;
    scanf("%d\n",&n);
   // printf("%d\n",n);
    s=simpleArraySum(n);
   printf("%d",s);
    return 0;
}
