/*Το ειδος ενος γραμματοσημου καθοριζεται απο τον χαρακτηρα Ε για εσωτερικου,
Α για εξωτερικου, και Τ για τοπικες αποστολες. Καθε γραμματισημο κατηγοριας Ε
κοστιζει 0.23$, καθε γραμματοσημα κατηγοριας Α κοστιζει 0.7$, και καθε γραμματοσημο
κατηγοριας Τ κοστιζει 0.15$. Να γραφτει ενα προγραμμα το οποιο θα ζηταει να πληκτρολογησουμε 
την ποσοτητα και το ειδος των γραμματοσημων που θελουμε να αγορασουμε και θα 
υπολογιζει το ποσο που πρεπει να πληρωσουμε.*/
#include <stdio.h>
#define A 0.7
#define T 0.15
#define E 0.23
int main()
{
    int e,t,a;
    float total;
    printf("Enter the ammount of E that you want to purchace: ");
    scanf("%d",&e);
    printf("Enter the ammount of T that you want to purchace: ");
    scanf("%d",&t);
    printf("Enter the ammount of A that you want to purchace: ");
    scanf("%d",&a);
    total=e*E+a*A+t*T;
    printf("Your total is: %f$\n", total);
    return 0;
}