#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("Largest number is=%d",a);
    if(b>a&&b>c)
    printf("Largest number is=%d",b);
    if(c>a&&c>b)
    printf("Largest number is=%d",c);

}

