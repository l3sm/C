#include <stdio.h>
int main (){
    int number, sum=0;
    printf("How many numbers do you want to summarize?\n");
    int count;
    scanf("%d", &count);
    while (count<=0){
        printf("Do not input a negative number or the number 0. Try again!\n");
        scanf("%d", &count);
    }
    for (int i=1; i<=count; i++){
    printf("Enter number %d: ", i);
    scanf("%d", &number);
    sum += number;}
    printf("The sum of your numbers is %d\n",sum);
    if (sum%2 == 0){printf("The number %d is even\n",sum);}
    else {printf("The number %d is odd\n",sum);}
    return 0;
}
