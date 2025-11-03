#include <stdio.h>

int bankingSystem(int *currentLimit, int transaction);

int main()
{
    int currentLimit, transaction;
    printf("Enter current remaining limit(in $): ");
    scanf("%d", &currentLimit);
    printf("Enter transaction amount(in $): ");
    scanf("%d", &transaction);
    
    bankingSystem(&currentLimit, transaction);
    
    printf("Remaining limit: $%d", currentLimit);

    return 0;
}

int bankingSystem(int *currentLimit, int transaction){
    int transLimit=5000;
    if(transaction <= *currentLimit && transaction <= transLimit){
        *currentLimit = *currentLimit-transaction;
        printf("\nAPPROVED!\n");
    } else{
        printf("\nDECLINED!\n");
    }
    return *currentLimit;
}
