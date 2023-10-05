#include<stdio.h>
int main(){
    printf("\n Hello World");

    printf("\n ********************************");
    int a;
    float b;
    char c;
    printf("\n Enter an integer");
    scanf("%d", &a);

    printf("\n Enter a decimal number");
    scanf("%f", &b);

    printf("\n Enter a character");
    scanf(" %c", &c);  //note space before %c to skip whitespace characters
    
    printf("\n Here's your entered data:");
    printf("\n Integer : %d",a);
    printf("\n Decimal number : %f",b);
    printf("\n Character : %c",c);
    printf("\n ********************************");
    return 0;
}