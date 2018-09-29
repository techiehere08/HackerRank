#include<stdio.h>
int Kangaroo(int x1, int v1, int x2,int v2){
    int p,q,i,c=0;
    for(i=0;i<20000;i++){
        p=x1+v1*i;
        q=x2+v2*i;
        if(p==q)
        {
            printf("YES");
            c++;
            break;
        }
     }
    if(c==0)
            printf("NO");
 return 0;
}
int main(){
    int x1,x2,v1,v2;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    Kangaroo(x1,v1,x2,v2);
    return 0;
}
