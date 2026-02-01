#include <stdio.h>
int main(){
    int number;
    printf("Select an integral number from (1-100) that you want to see the multiplication table of (1-10)\n");
    scanf("%d", &number);
    while (!(number >= 1 && number <=100)){
    printf("please select an integral number that is from 1-100\n");
    scanf("%d", &number);}
    for (int i=1; i<=10; i++){printf("%d x %d = %d\n", number, i , i*number);}
    return 0;

}
