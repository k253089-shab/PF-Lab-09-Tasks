#include <stdio.h>

float billCalculation(float, int);

int main()
{
    int people;
    float foodCost;
    printf("Enter food cost(in $): ");
    scanf("%f", &foodCost);
    printf("Enter number of people: ");
    scanf("%d", &people);
    
    float totalBill = billCalculation(foodCost, people);
    printf("\nTotal Bill: $%.2f", totalBill);

    return 0;
}

float billCalculation(float foodCost, int people){
    float tax, tip, serviceCharge=0;
    tax=foodCost*0.08;
    if(foodCost>50)
        tip=foodCost*0.15;
    else
        tip=foodCost*0.10;
    if(people>6)
        serviceCharge=foodCost*0.05;
    
    return foodCost+tax+tip+serviceCharge;
}
