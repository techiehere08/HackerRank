#include<stdio.h>
int getTotalX(int n,int m){
    int ar[n],arr[m],i,j,c=0,t=0,temp[100],count=0,min;
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=1;i<m;i++){
        if(min>arr[i])
            min=arr[i];
    }
    
    for(i=1;i<=min;i++){
        c=0;
    for(j=0;j<n;j++){
    if(i%ar[j]==0)
    c++;    
    }    
    if(c==n)
       temp[t++]=i;
    }

    for(i=0;i<t;i++){c=0;
        for(j=0;j<m;j++)
            if(arr[j]%temp[i]==0)
                c++;
        if(c==m)
            count++;
    }


    printf("%d\n",count );

    return 0;
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    getTotalX(n,m);
    return 0;
}

