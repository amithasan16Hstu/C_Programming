#include<stdio.h>
int main()
{
    char name[30];
    gets(name);
    float salary;
    double sell,total;
    scanf("%f %lf",&salary, &sell);
    total=salary+(sell*15)/100;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;



}
