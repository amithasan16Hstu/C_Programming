#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("The largest number is %d",a);
    }
    else if(b>a && b>c){
        printf("The largest number is %d",b);
    }
    else if(a==b && c>a || c>a){
        printf("The largest number is %d",c);
    }
    else{
        printf("They are equal");
    }
}
