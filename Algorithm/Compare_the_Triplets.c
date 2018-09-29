#include<stdio.h>
int compareTriplets(int n,int m){
    int i,a[n],b[m],award[2]={0,0};
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    for(i=0;i<3;i++)
        scanf("%d",&b[i]);
    for(i=0;i<3;i++){
        if(a[i]>b[i])
            award[0]++;
        else if(a[i]<b[i])
            award[1]++;
        }
    printf("%d %d",award[0],award[1]);
    return 0;
}
int main(){
    int n=3,m=3;
    compareTriplets(n,m);
    return 0;
}
