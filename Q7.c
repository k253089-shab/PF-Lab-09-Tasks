#include <stdio.h>

float priceCalculation(int days, float km);

int main()
{
    int days;
    float km;
    printf("Enter rental days: ");
    scanf("%d", &days);
    printf("Enter kilometers driven: ");
    scanf("%f", &km);
    
    printf("\nFinal Rental Cost: $%.2f", priceCalculation(days, km));

    return 0;
}

float priceCalculation(int days, float km){
    float baseRate=0, extraMileage=0, avgKM, finalRentalCost;
    avgKM=(float)km/days;
    if(days>0)
        baseRate=40*days;   
    if((avgKM)>100)
        extraMileage=(avgKM-100)*0.25*days;
    finalRentalCost=baseRate+extraMileage;
    if(days>7)
        finalRentalCost-=(finalRentalCost*0.10);
  
    return finalRentalCost;
}
