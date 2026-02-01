/*Να γραφτει ενα προγραμμα το οποιο θα διαβαζει την ακτινα ρ ενος κυκλου και θα 
εμφανιζει την περιμετρο και το εμβαδον του(περιμετρος=2*π*ρ, εμφαδον = π*ρ^2).
Το προγραμμα πρεπει να προτρεπει τον χρηστη για την εισοδο δεδομενων με τη φραση Δωσε ακτινα:.
Η τιμη του π να οριζεται ως σταθερα με την τιμη 3.141592.*/
#include <stdio.h>
#include <math.h>
#define pi 3.141592
int main ()
{
    float r, perimeter, area;
    printf("Enter radius: ");
    scanf("%f", &r);
    perimeter=2*pi*r;
    area= pi*pow(r,2);
    printf ("The perimeter is %f and the area is %f", perimeter,area);
    return 0;

}