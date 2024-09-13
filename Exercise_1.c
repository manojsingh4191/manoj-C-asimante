#include<stdio.h>
int main()
{
    int a, b;
    printf("enter two no :-");
    scanf("%d%d",&a,&b);
    if (a==b)
    {
        printf("both are equal");
    }
    else
    {
        printf("they are not equal");
    }
    return 0;
}