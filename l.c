#include<stdio.h>
int main()
{
    int i,s=0,N;
    printf("Enter the numbers\n");
    scanf("%d",&N);
    for(i=5;i<=N;i=i+5)
    {
        s=s+i;
    }
    printf("Addition is %d\n",s);
    return 0;
}
