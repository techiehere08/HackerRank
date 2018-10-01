#include<stdio.h>
int pageCount(int n,int k){
    int arr[n],i,c,mid;
    if(n%2==0)
        n=n+1;
    mid=(1+n)/2;
    if(k>=mid){
    i=n-k;
        i=i/2;
    }
    else
        i=k/2;
    printf("%d",i);
    return 0;
}
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    pageCount(n,k);
    return 0;
}