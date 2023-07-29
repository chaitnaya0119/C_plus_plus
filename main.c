#include<stdio.h>
#include<math.h>
int main()
{
    float base,power,d;
    printf("enter the base number:");
    scanf("%f",&base);
    printf("enter the power number:");
    scanf("%f",&power);
    d=pow(base,power);
    printf("the exponential value is %f",d);
    return 0;
}
