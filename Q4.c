#include <stdio.h>

int shippingCalculation(int, int);

int main(){
    int orderAmount, weight;
    printf("Enter order amount(in $): ");
    scanf("%d", &orderAmount);
    printf("Enter package weight(in kg): ");
    scanf("%d", &weight);
    
    int totalCost=shippingCalculation(orderAmount, weight);
    printf("\nYour total cost is $%d\n", totalCost);
    
    return 0;
}

int shippingCalculation(int orderAmount, int weight){
    int shippingAmount;
    if(orderAmount>100)
        shippingAmount=0;
    else if(weight<2)
        shippingAmount=10;
    else if(weight>=2 && weight<=5)
        shippingAmount=15;
    else if(weight>5)
        shippingAmount=20;
    
    return orderAmount+shippingAmount;
}
