#include <stdio.h>
int main (void) {
    char choice;
    do {
        float num1, num2;
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);
        
        int operation;
        printf("Enter the operation you want to do (1 = add/2 = subtract/3 = multiply/4 = divide): ");
        scanf(" %d", &operation);
        
        if (operation==1) {
            printf("The final sum of the two numbers will be %f.\n", num1+num2);
        }
        else if (operation==2) {
            printf("The difference between the two numbers is %f.\n", num1-num2);
        }
        else if (operation==3) {
            printf("The product of the two numbers will be %f.\n", num1*num2);
        }
        else if (operation==4) {
            printf("The quotient of the two numbers will be %f.\n", num1/num2);
        }
        else {
            printf("Invalid input.\n");
        }
        
        printf("Do you wish to use the calculator again? (y/n): ");
        scanf(" %c", &choice);
        
    } while (choice == 'y');
    
    printf("The program ended.");
    return 0;
}
