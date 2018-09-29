#include<stdio.h>
int main(){
   long int i,max=0,min=0,arr[5],temp,maxsum=0,minsum=0,j;
    for(i=0;i<5;i++)
    {
        scanf("%ld",&arr[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<4;i++)
        minsum=minsum+arr[i];
        for(i=1;i<5;i++)
            maxsum=maxsum+arr[i];
    printf("%ld %ld",minsum,maxsum);
    return 0;
}
