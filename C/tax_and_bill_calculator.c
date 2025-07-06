#include <stdio.h>
int main(void) {
    float price[3];
    
    printf("Enter the price of the first item: ");
    scanf("%f", &price[0]);
    
    printf("Enter the price of the second item: ");
    scanf("%f", &price[1]);
    
    printf("Enter the price of the third item: ");
    scanf("%f", &price[2]);
    
    float total = price[0] + price[1] + price[2];
    float tax_gst = total * 0.18;
    
    float final_bill = total + tax_gst;
    printf("The final amount to be paid is %f with tax of %f.", final_bill, tax_gst);
    
    return 0;
}
