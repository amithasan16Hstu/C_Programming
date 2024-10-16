#include<stdio.h>
int main()
{
    int n,h;
    float salary,amount;
    scanf("%d %d %f",&n,&h,&salary);
    salary=n*h;
    printf("NUMBER = %d\n",n);
    printf("SALARY = %.2f\n",salary);
    return 0;

}
