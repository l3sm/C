/*Να γραφει ενα προγραμμα το οποιο να εμφανιζει το επομενο μενου , να δεχεται εναν αριθμο, και να κανει την αντιστοιχη ενεργεια.
1-Εμφανισε την λεξη Hello
2-print the number 2
3-print bye bye
4-Do nothing.
Choose:*/
#include <stdio.h>
int main ()
{
    printf("choose a number between 1 and 4: ");
    int number ;
    scanf("%d",&number);
    if (number ==1)
    {printf("Hello\n");}
    else if (number==2)
    {printf("%d\n",number);}
    else if (number==3)
    {printf("bye bye\n");}
    else if (number==4)
    {//Do nothing
    }
    else
    {printf("Wrong choice");}
    return 0;
}