#include <stdio.h>

int main(){
    int grid[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int *p1 = &grid[0][0];
    int *p2 = &grid[1][0];

    printf("p1 first: %d\n", *p1);
    printf("p1+5: %d\n", *(p1 + 5));
    printf("p2 first: %d\n", *p2);
    printf("p2-1: %d\n", *(p2 - 1));
    printf("p2+2: %d\n", *(p2 + 2));
    
    int *ptr;
    printf("Multiples of 3: ");
    for (ptr = &grid[0][0]; ptr <= &grid[2][3]; ptr++)
        if (*ptr % 3 == 0)
            printf("%d ", *ptr);

    printf("\nLast element: %d\n", *( &grid[0][0] + 11 ));

    return 0;
}
