#include<stdio.h>
int main()
{
    double n,sum=0;
    printf("Enter Number of Input: ");
    scanf("%lf",&n);
    printf("Input all Number: ");
    for(int i=0;i<n;i++)
    {

        double input_number;
        scanf("%lf",&input_number);
        if(input_number>0)
        {
            sum+=input_number;
        }

    }
    printf("\nThe sum of positive integer: %.2lf",sum);
}
