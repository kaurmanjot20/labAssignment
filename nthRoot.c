#include <stdio.h>
#include <math.h>

int main() {
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

    //number : -ve ; root: +ve even ; output: nan 

    return 0;
}
