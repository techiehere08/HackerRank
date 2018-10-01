#include<stdio.h>
int dayOfProgrammer(int y){
   int day,month=9;
    if(y<1918)
        if(y%4==0)
            day=12;
        else
            day=13;
    else if(y>1918)
        if(y%4==0 && y%100!=0)
            day=12;
        else if(y%400==0)
            day=12;
        else
            day=13;
    else
        day=26;
    printf("%d.0%d.%d",day,month,y);
    return 0;
}
int main(){
    int y;
    scanf("%d",&y);
    dayOfProgrammer(y);
    return 0;
}