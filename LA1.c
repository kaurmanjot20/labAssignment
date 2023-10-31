//MANJOT KAUR (102303023 COE) LA-1
#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main() {
    /*  INPUTS
    printf("\n Hello World");

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
    */

    /*  FRACTIONAL INPUT
    int num,deno;

    printf("\n Enter the numerator :");
    scanf("%d", &num);
    printf("\n Enter the denominator :");
    scanf("%d", &deno);

    if(deno != 0){
        printf("\n The rational number is : %d/%d",num,deno);
    }else{
        printf("\n Error: Denominator can't be zero.");
    }
    */

    /*  NTH ROOT
    float number, root;
    int n;

    printf("Enter a number: ");
    scanf("%f", &number);

    printf("Enter the value of N (root): ");
    scanf("%d", &n);

    if (n % 2 == 0 && number < 0) {
        printf("Error: Cannot calculate even root of a negative number.\n");
    } else {
        root = pow(number, 1.0 / n);
        printf("\n %dth root of %.2f is %.2f", n, number, root); // number after dot signifies the number of decimal places to be displayed
    }
    */

    /*  AREA OF CIRCLE
    float r,area;
    
    printf("\nInput radius of the circle");
    scanf("%f",&r);
    area = PI * pow(r,2);
    printf("\nArea of circle of radius %.2f = %.3f",r,area);
    */

    /*   SIMPLE INTEREST
    float P,R,T,SI;
    printf("\n Enter Principal:");
    scanf("%f",&P);
    printf("\n Enter rate of Interest:");
    scanf("%f",&R);
    printf("\n Enter time (in years):");
    scanf("%f",&T);
    SI = (P*R*T)/100;
    printf("\n The Simple Interest on %.2f at %.2f rate of interest for %.1f years is : %.2f",P,R,T,SI);
    */

    /*  COMPUND INTEREST
    float P,R,T,amt,CI;
    printf("\n Enter Principal:");
    scanf("%f",&P);
    printf("\n Enter rate of Interest:");
    scanf("%f",&R);
    printf("\n Enter time (in years):");
    scanf("%f",&T);

    amt = P*pow((1+(R/100)),T);
    CI = amt - P;
    printf("\n The Compound Interest on %.2f at %.2f rate of interest for %.1f years is : %.2f\n Amount = %.2f",P,R,T,CI,amt);
    */

    /*  GROSS SALARY
    float gs,bs,da,ta;
    printf("\nEnter Basic Salary");
    scanf("%f",&bs);
    da = 0.1 * bs;
    ta = 0.12 * bs;
    gs = bs + da + ta;
    printf("\nGross salary = %.2f",gs);
    */

    return 0;
}
