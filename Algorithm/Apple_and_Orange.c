#include<stdio.h>
int countApplesAndOranges(int m, int n, int s,int t,int a,int b){
    int apples[m],oranges[n],i,ap=0,or=0;
    for(i=0;i<m;i++){
        scanf("%d",&apples[i]);
    }
    for(i=0;i<n;i++){
        scanf("\n%d",&oranges[i]);
    }
    for(i=0;i<m;i++){
        if((s-a)<=apples[i]&&(t-a)>=apples[i])
            ap++;
    }
    for(i=0;i<n;i++){
    if(oranges[i]<=(t-b)&&oranges[i]>=(s-b))
        or++;
        }
    printf("%d\n%d",ap,or);
    return 0;
}
int main(){
    int m,n,s,t,a,b;
    scanf("%d%d\n%d%d\n",&s,&t,&a,&b);
    scanf("%d%d",&m,&n);
    countApplesAndOranges(m,n,s,t,a,b);
    return 0;
}
