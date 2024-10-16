#include<stdio.h>
int main()
{
    int month;
    printf("Enter a month number:");
    scanf("%d",&month);
    switch(month)
    {
    case 1:
        printf("Month name:January &Total number of days are%d",31);
        break;
    case 3:

 printf("Month name:March &Total number of days are%d",31);
 break;

    case 5:
         printf("Month name:May &Total number of days are%d",31);
break;

    case 7:
         printf("Month name:July &Total number of days are%d",31);
    break;
    case 8:
         printf("Month name:August &Total number of days are%d",31);
    break;
    case 10:
         printf("Month name:October &Total number of days are%d",31);
    break;
    case 12:
        printf("Month name :December &Total numbers of days is:%d",31);
        break;
    case 2:
        printf("Month name:February &Total number of days is:%d",28);
        break;
    case 4:
         printf("Month name:April &Total number of days are%d",30);
    break;
    case 6:
         printf("Month name:June &Total number of days are%d",30);
    break;
    case 9:
         printf("Month name:September &Total number of days are%d",30);
    break;
    case 11:
        printf(" Month name is November &Total number of days:%d",30);
        break;
    }
    default:{
        printf("There is no month");}
}
