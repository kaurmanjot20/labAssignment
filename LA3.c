#include<stdio.h>
#include<math.h>
int main(){
    /*  CHECK WHETHER CAPITAL LETTER, SMALL LETTER, DIGITS, SPECIAL CHARACTERS
    char ch;
    printf("\nEnter a character : ");
    scanf("%c",&ch);
    if(ch >= '0' && ch <= '9') {
    printf("'%c' is a digit.\n", ch);
    }
    else if(ch >= 'A' && ch <= 'Z') {
    printf("'%c' is an uppercase letter.\n", ch);
    }
    else if(ch >= 'a' && ch <= 'z') {
    printf("'%c' is a lowercase letter.\n", ch);
    }
    else {
    printf("'%c' is a special character.\n", ch);
    }
    */
    /*  GREATEST OF 3 NUMBERS USING IF ELSE
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b) {
        if(a > c) {
            printf("%d is the greatest number.", a);
        }
        else {
            printf("%d is the greatest number.", c);
        }
    }
    else {
        if(b > c) {
            printf("%d is the greatest number.", b);
        }
        else {
            printf("%d is the greatest number.", c);
        }
    }*/

    /*  GREATEST OF 3 NUMBERS USING TERNARY
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int greatest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("The greatest number is: %d", greatest);
    */

    /* To check a no. say ‘n’ divisible by 5 and/or 8. Print the appropriate message accordingly.
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%5==0 && n%8==0)
    printf("%d is divisible by both 5 and 8.", n);
    else if(n%5==0)
    printf("%d is divisible by 5.", n);
    else if(n%8==0)
    printf("%d is divisible by 8.", n);
    else
    printf("%d is not divisible by 5 or 8.", n);
    */

    /*  LIBRARY FINE
    int days;
    printf("\nEnter number of days the member is late to return the book : ");
    scanf("%d",&days);
    if(days >= 0 && days <= 5){
        printf("\nFine imposed: 50 paisa");
    }else if(days >= 6 && days <= 10){
        printf("\nFine imposed: 1 rupee");
    }else if(days >= 10 && days <= 30){
        printf("\nFine imposed: 5 rupees");
    }else{
        printf("\nMembership cancelled!");
    }
    */

    /*  EVEN OR ODD USING IF ELSE
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    if(n%2==0){
        printf("\n%d is an even number",n);
    }else{
         printf("\n%d is an odd number",n);
    }
    */

    /*   EVEN OR ODD USING TERNARY 
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    int d = (n%2==0) ? printf("\n%d is an even number",n) : printf("\n%d is an odd number",n);
    */

    /*  SWITCH CASE TO PRINT MONTH
    int n;
    printf("\nEnter month number to display it");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("\nJanuary");
        break;
    case 2:
        printf("\nFebruary");
        break;
    case 3:
        printf("\nMarch");
        break;
    case 4:
        printf("\nApril");
        break;
    case 5:
        printf("\nMay");
        break;
    case 6:
        printf("\nJune");
        break;
    case 7:
        printf("\nJuly");
        break;    
    case 8:
        printf("\nAugust");
        break;
    case 9:
        printf("\nSeptember");
        break;
    case 10:
        printf("\nOctber");
        break;
    case 11:
        printf("\nNovember");
        break;
    case 12:
        printf("\nDecember");
        break;
    default:
        printf("\nEnter a value from 1 to 12.");
        break;
    }
    */

    /*  AVG,MAX,MIN,STANDARD DEVIATION
    int A[5];

    printf("\nEnter 5 numbers");
    for(int i = 0; i < 5; i++) {
    scanf("%d", &A[i]); 
    }

    int size = sizeof(A) / sizeof(A[0]);
    
    int max = A[0]; 
    int min = A[0];
    float avg,dev;
    float sum = 0;
    float num = 0;

    for(int i=1; i<size; i++) {

        if(A[i] > max) {
        max = A[i];
        }

        if(A[i] < min) {
        min = A[i]; 
        }

        sum = sum + A[i];
    }

    avg = sum/size;

    for(int i=1; i<size; i++){
        dev = pow(A[i]-avg,2);
    }
    dev = sqrt(dev/size);

    printf("\nMaximum element : %d", max);
    printf("\nMinimum element : %d", min);
    printf("\nAverage : %.2f", avg);
    printf("\nStandard deviation : %.2f", dev);
    */

    /*  FACTORIAL
    int n;
    printf("\nEnter a number");
    scanf("%d",&n);
    int fact=1;
    for(int i=n;i>0;i--){
        fact = fact*i;
    }
    printf("\nFactorial of %d is %d", n,fact);
    */

    /*  PRIME NUMBER
    int n,f;
    printf("\nEnter a number");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        int p = n%i;
        if(p==0){
            f=1;
        }
    }
    if(f==1){
        printf("\nNot a prime number");
    }else{
        printf("\nYes a prime number");
    }
    */

   /*   ARMSTRONG NUMBERS BETWEEN 1 TO 500
    int num, temp, rem, sum = 0, n;

  for(num = 1; num <= 500; num++)
  {
    temp = num;
    n = 0;
    while(temp > 0) 
    {
      temp /= 10;
      n++;
    }

    temp = num;
    while(temp > 0)
    { 
      rem = temp%10;
      sum += pow(rem, n);
      temp /= 10;
    }

    if(sum == num)
      printf("%d ", num);

    sum = 0;
  }
    */
    
    /*  MULTIPLICATION TABLE
    int n,prod;
    printf("\nEnter a number");
    scanf("%d",&n);
    for(int i=1;i<11;i++){
        prod = n*i;
        printf("\n %d * %d = %d",n,i,prod);
    }
    */

   
    return 0;
}