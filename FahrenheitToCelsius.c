#include <stdio.h>

int main(){
    int answer;
    float temp, conversion;
    printf("Do you want to convert:\n1) Fahrenheit °F to Celsius °C\n2) Celsius °C to Fahrenheit °F\n");
    scanf("%d", &answer);
    while (answer !=1 && answer !=2){printf("Incorrect input please choose 1 or 2\n1) Fahrenheit °F to Celsius °C\n2) Celsius °C to Fahrenheit °F\n"); 
    scanf("%d", &answer);}
    printf("Option %d has been selected\nNow please input the temperature you would like to convert.\n", answer);
    scanf("%f", &temp);
    //C=5/9​×(F−32)
    if (answer==1){conversion= (temp-32.0)*(5.0/9.0);
    printf("%.2f degrees Fahrenheit are equal to %.2f degrees Celsius.",temp,conversion);}
    else if (answer==2){conversion = temp*(9.0/5.0)+32.0;
    printf("%.2f degrees Celsius are equal to %.2f degrees Fahrenheit.",temp,conversion);}
    return 0;
    
}
