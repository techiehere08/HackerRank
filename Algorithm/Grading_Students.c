#include<stdio.h>
int gradingStudents(int n){
    int i, grade[n],temp,local;
    for(i=0;i<n;i++){
    scanf("%d",&temp);
    if(temp<38)
        grade[i]=temp;
    else
    {
        local=temp;
        temp=temp/5;
        temp=(temp+1)*5;
        if((temp-local)<3)
            grade[i]=temp;
        else
            grade[i]=local;
    }
    }
    for(i=0;i<n;i++){
        printf("%d\n",grade[i]);
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    gradingStudents(n);
    return 0;
}
