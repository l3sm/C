/*Να γραφτει ενα προγραμμα το οποιο να ζηταει
τρεις ακεραιους αριθμους και να εμφανιζει τον
μεγαλυτερο απο αυτους.*/
#include <stdio.h>
int main()
{
    int a,b,c,bigger;
    printf("Enter 3 integers: /n");
    scanf ("%d %d %d",&a,&b,&c);
    if (a>b&&a>c) bigger=a;
    if (b>a&&b>c) bigger=b;
    if (c>a&&c>b) bigger=c;
    printf("The biggest number out of %d, %d, %d is %d",a,b,c,bigger);
    return 0;
}