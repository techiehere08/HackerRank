#include<stdio.h>
int main()
{
    int i,p=0,n=0,z=0,s,arr[500];
    float p1,n1,z1;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
            p++;
        else if(arr[i]<0)
            n++;
        else
            z++;
    }
    p1=(float)p/s;
    n1=(float)n/s;
    z1=(float)z/s;
    printf("%f\n",p1);
    printf("%f\n",n1);
    printf("%f\n",z1);
        
}
