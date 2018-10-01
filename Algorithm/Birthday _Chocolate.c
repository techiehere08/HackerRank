	#include<stdio.h>
int birthday(int n){
    int arr[n],i,sum=0,d,m,j,c=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("\n%d %d",&d,&m);
    for(i=0;i<=n-m;i++){
        sum=0;
        for(j=i;j<m+i;j++){
            sum=sum+arr[j];
        }
        if(sum==d)
            c++;
    }
    printf("%d",c);
    return 0;
}
int main(){
int n;
    scanf("%d",&n);
    birthday(n);
    return 0;
}