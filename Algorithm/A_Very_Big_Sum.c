#include<stdio.h>
main()
{
    int i,n;
    long int ar[200],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&ar[i]);
        sum=sum+ar[i];
    }
    printf("%ld",sum);
    return 0;
}
