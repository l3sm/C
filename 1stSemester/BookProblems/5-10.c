/*Να γραφει προγραμμα το οποιο θα διαβαζει απο το πληκτρολογιο λεξεις με 3 χαρακτηρες και να τους εμφανιζει με την αντιστροφη σειρα.*/
#include <stdio.h>
int main()
{
    char a,b,c;
    a=getchar();
    b=getchar();
    c=getchar();
    getchar();
    printf("%c%c%c\n",c,b,a);
    return 0;
}