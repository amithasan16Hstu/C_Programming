#include<stdio.h>
int main()
{
    char c;
    printf("Enter a alphabet:");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    {
        printf("Its a uppercase",c);
    }
    else
    {
        printf("Its a lowercase",c);
    }

}
