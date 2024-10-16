#include<stdio.h>
int main()
{
    int a;
    Printf("Enter seriol no of month=");
    scanf("'%d",&a);
    if(a==1)
        printf("name of month=January,days=31");
    else  if(a==2)
        printf("name of month=febuary,days=28");

    else if(a==3)
        printf("name of month=March,days=31");

    else if(a==4)
        printf("name of month=april,days=30");

    else  if(a==5)
        printf("name of month=may,days=31");
    else if(a==6)
        printf("name of month=june,days=30");

    else if(a==7)
        printf("name of month=July,days=31");
    else if(a==8)
        printf("name of month=agust,days=31");
    else  if(a==9)
        printf("name of september,days=30");
    else if(a==10)
        printf("name of the month october,days=31");
    else if(a==11)
        printf("name of month=november,days=30");
    else if(a==12)
        printf("name of month=december,days=31");
    else
        printf("nothing");
}
