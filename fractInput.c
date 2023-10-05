#include<stdio.h>
int main(){
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
}