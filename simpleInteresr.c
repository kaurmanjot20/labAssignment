#include<stdio.h>
int main(){
    float P,R,T,SI;
    printf("\n Enter Principal:");
    scanf("%f",&P);
    printf("\n Enter rate of Interest:");
    scanf("%f",&R);
    printf("\n Enter time (in years):");
    scanf("%f",&T);
    SI = (P*R*T)/100;
    printf("\n The Simple Interest on %.2f at %.2f rate of interest for %.1f years is : %.2f",P,R,T,SI);
    
    return 0;
}