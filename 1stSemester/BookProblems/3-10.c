/*Να γραφτει ενα προγραμμα το οποιο θα ζηταει να πληκτρολογησουμε ενα ποσο και ενα ποσοστο ΦΠΑ.
Το προγραμμα πρεπει να υπολογιζει και να εμφανιζει το τελικο κοστος (ποσο+φπα)*/
#include <stdio.h>
int main ()
{
    float price,tax,total;
    printf("Enter a price and its tax divided by enter\n");
    scanf("%f %f",&price,&tax);
    total=(tax/100.0+1)*price;
    printf("The total price is: %f", total);
    return 0;
}