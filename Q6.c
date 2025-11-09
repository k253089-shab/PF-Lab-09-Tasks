#include <stdio.h>

float taxCalculation(float, float *);

int main()
{
    float grossIncome, netIncome;
    printf("Enter gross income: ");
    scanf("%f", &grossIncome);
    
    printf("\nTax: %.2f", taxCalculation(grossIncome, &netIncome));
    printf("\nNet Income: %.2f", netIncome);

    return 0;
}

float taxCalculation(float grossIncome, float *netIncome){
    float tax;
    if(grossIncome>=0 && grossIncome<=20000)
        tax=0;
    else if(grossIncome>20000 && grossIncome<=50000)
        tax=(grossIncome-20000)*(0.1);
    else if(grossIncome>50000)
        tax=((grossIncome-50000)*(0.2))+((30000)*(0.1));
        
    *netIncome=grossIncome-tax;
    
    return tax;
}
