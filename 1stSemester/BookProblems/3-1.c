#include <stdio.h>
int main ()
{
    float a,b,c,d;
    printf("Input the first number: ");
    scanf("%f",&a);
    printf("Input the first second: ");
    scanf("%f",&b);
    printf("Input the first third: ");
    scanf("%f",&c);
    d=(a+b+c)/3;
    printf("The average of the three numbers is %f", d);
    return 0;
}