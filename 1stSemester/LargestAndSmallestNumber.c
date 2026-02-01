#include <stdio.h>
#include <limits.h>
int main()
{
    int number,tempnumber, numbers[1000];
    int sum=0, max=INT_MIN, min=INT_MAX;
    printf("How many numbers would you like to input?\n");
    scanf("%d", &number);
    while (!(number>0)){
    printf("Please enter a positive number: ");
    scanf("%d", &number);
    }
for (int i=0; i<number; i++){
    printf("Enter number %d: ", i+1);
    scanf("%d",&tempnumber);
    numbers[i] = tempnumber;
    sum+= tempnumber;
    if (max<tempnumber){max=tempnumber;}
    if (min>tempnumber){min=tempnumber;}

}
printf("the sum is %d and it",sum );
    if (sum%2==0){printf(" is an even number!\n");}
    else {printf(" is an odd number!\n");}
    printf("The max number is: %d\nThe minimum number is: %d\n", max, min);
    return 0 ;
    
}
