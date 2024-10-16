#include<stdio.h>
int main()
{
    int i,start,end,temp;
    scanf("%d %d",&start,&end);
    if(start<end)
    {
        for(i=start;i<=end;i++)
        {
            printf("%d ",i);
        }
    }
    else if(start>end)
    {
        temp=start;
        start=end;
        end=temp;

    for(i=start;i<=end;i++)
    {
        printf("%d ",i);
    }
    }

}
