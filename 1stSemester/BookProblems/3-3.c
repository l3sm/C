#include <stdio.h>
int main()
{
    float a,b,c,sum,product,average;
    printf("Input the first number: ");
    scanf ("%f",&a);
    printf("Input the second number: ");
    scanf ("%f",&b);
    printf("Input the third number: ");
    scanf ("%f",&c);
    sum=a+b+c;
    product=a*b*c;
    average=sum/3;
    printf("The sum of %f, %f, %f is %f\n",a,b,c,sum);
    printf("The product of %f, %f, %f is %f\n",a,b,c,product);
    printf("The average of %f, %f, %f is %f\n",a,b,c,average);
    return 0;
}