#include<stdio.h>
long int birthdayCakeCandles(int n)
{   long int arr[n],max=0,i,c=0;
    for(i=0;i<n;i++) // restricted user for specific number of input
    {
        scanf("%ld",&arr[i]); //taking inputs from user
      }
    max=arr[0];
        for(i=0;i<n;i++)
        {
             if(arr[i]>=max)  // finding maximum element in array
            max=arr[i];
        }
    for(i=0;i<n;i++)
        if(arr[i]==max) 
            c++;        //calculating how many times max number 
    return c;
}
main(){
   long int n,count;
scanf("%ld",&n); //intialising number of input
count=birthdayCakeCandles(n); //calling to function 
printf("%ld",count);      
    return 0;
}
