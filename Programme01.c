#include <stdio.h>
/*Programme qui permet de demander un nombre entier à l’utilisateur, et l’informe ensuite si ce nombre est positif ou négatif.*/
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