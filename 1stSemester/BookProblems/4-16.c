/*Να γραφτει ενα προγραμμα το οποιο να ζηταει εναν ακεραιο 
αριθμο και να εμφανιζει το τελευταιο ψηφιο.*/
#include <stdio.h>
int main()
{
    int number,a;
    printf("Enter an integer: ");
    scanf("%d",&number);
    printf("The last digit of the number is %d\n", number%10);
    return 0;
}