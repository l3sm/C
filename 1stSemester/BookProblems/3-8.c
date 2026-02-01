/*Να γραφτει ενα προγραμμα το οποιο να ζηταει δυο ακεραιους αριθμους 
που θα χωριζονται με ενα κομμα (,) και εναν αστερισκο (*) και να εμφανιζει 
το αθροισμα τους.*/
#include <stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter 2 integers with a (,) and a (*) in between like x,*y: ");
    scanf("%d,*%d",&a,&b);
    sum = a+b;
    printf ("sum = %d\n", sum);
    return 0;
}