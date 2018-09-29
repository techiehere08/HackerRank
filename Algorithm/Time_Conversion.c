#include<stdio.h>
#include<string.h>
int timeConversion(char s[]){
    int l,h,r;
    char hr[3];
    l=strlen(s);
    if(s[l-2]=='P')
    { 
        if(s[0]=='1' && s[1]=='2')
        s[l-2]='\0';
        else
            {
        s[l-2]='\0';
        hr[0]=s[0];
        hr[1]=s[1];
        h=(int)hr[0]-48;
        h=h*10+((int)hr[1]-48);
        h=h+12;
        if(h>23)
            h=h-24;
        r=h%10;
        h=h/10;
        r=r+48;
        h=h+48;
        s[0]=(char)h;
        s[1]=(char)r;
        }
    }
    else
        if(s[0]=='1' && s[1]=='2')
        {
        s[l-2]='\0';
        hr[0]=s[0];
        hr[1]=s[1];
        h=(int)hr[0]-48;
        h=h*10+((int)hr[1]-48);
        h=h+12;
        if(h>23)
            h=h-24;
        r=h%10;
        h=h/10;
        r=r+48;
        h=h+48;
        s[0]=(char)h;
        s[1]=(char)r;
        }            
        else 
        s[l-2]='\0';
        printf("%s\n",s);
        return 0;
}
int main(){
    char str[20];
    scanf("%s",str);
    timeConversion(str);
    return 0;
}
