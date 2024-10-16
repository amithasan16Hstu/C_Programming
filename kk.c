#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three number:");
    scanf("%f %f %f",&a,&b,&c);

    if(a>b && a>c){
        printf("%.2f is the bigger number than %.2f and %.2f",a,b,c);
    }
    else
    {
        if(b>a && b>c){
            printf("%.2f is the bigger number than %.2f and %.2f ",b,a,c);}
            else{
    if(c>a && c>b){
                printf("%.2f is the bigger number than %.2f and %.2f",c,a,b);
            }
            else
                printf("All are equal %.2f=%.2f=%.2f",a,b,c);
    }
    }


    return 0;
}
