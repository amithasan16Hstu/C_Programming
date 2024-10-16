#include<stdio.h>
int main()
{
    float numbers;
    printf("Enter numbers:");
    scanf("%f",&numbers);
    if(numbers>=80)
    {
      printf("He obtained A+");
    }
    else if(numbers>=75 && numbers<80)
{
    printf("He obtained A");
}
else if(numbers>=70 && numbers<75)
{
    printf("He obtained A-");
}
else if(numbers>=60 && numbers<70)
{
    printf("He obtained B+");
}
else if(numbers>=50 && numbers<60)
{
    printf("He obtained B-");
}
else if(numbers>=40 && numbers<50)
{
    printf("He obtained C");
}
else{
    printf("He obtained F");
}

}
