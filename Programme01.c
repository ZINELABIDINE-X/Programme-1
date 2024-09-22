#include <stdio.h>

int main()  {
    float A,B;

    printf("Please enter the dividend : ");
    scanf("%f",&A);

    printf("Please enter the divisor : ");
    scanf("%f",&B);

    if (B != 0)
    
        printf("The result is : %.2f",A/B);
    else 
    printf("division by 0 is impossible");
    
    return 0;

}