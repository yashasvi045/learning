#include <stdio.h>
int main(void) {
    int i;
    printf("Enter the number of items you purchased: ");
    scanf("%d", &i);
    
    float price[i];
    
    for (int n = 0; n < i; n++) {
        printf("Enter the price of the item: ");
        scanf("%f", &price[n]);
    }
    
    float total = 0;
    
    for (int n = 0; n < i; n++) {
        total += price[n];
    }
    
    float tax_gst = total * 0.18;
    float final_bill = total + tax_gst;
    printf("The final amount to be paid is %f with tax of %f.", final_bill, tax_gst);
    
    return 0;
}
