#include<stdio.h>
int sockMerchant(int n){
    int ar[n],br[n],k=1,i,j,match,temp,count=0,pair=0;
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for (j = 0; j < n; ++j)
    {
        
    for(i=j;i<n;i++){
        if(ar[i]<ar[j])
        {
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
        }
    }
}
br[0]=ar[0];
    for(i=1;i<n;i++){
        if(ar[i]!=ar[i-1])
            br[k++]=ar[i];
    }    
    for(i=0;i<k;i++)
    {
        count=0;
        for(j=0;j<n;j++){
            if(br[i]==ar[j])
                count++;
        }
        pair=pair+count/2;
    }
    printf("_%d\n", pair );
    return 0;
    
}
int main(){
    int n;
    scanf("%d",&n);
    sockMerchant(n);
    return 0;
}