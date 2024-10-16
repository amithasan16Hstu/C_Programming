#include<stdio.h>
int main()
{
    float area, r;
    printf("Enter circle radius:");
    scanf("%f",&r);

   float const PI=3.1416;
    area=PI*r*r;
    printf("Area is:%.2f",area);

    return 0;
}
