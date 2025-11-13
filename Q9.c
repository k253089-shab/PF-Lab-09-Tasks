#include <stdio.h>

int main() {
    int a = 100, b = 200, c = 300;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptr3 = &c;

    int *temp = ptr1;
    ptr1 = ptr2;
    ptr2 = ptr3;
    ptr3 = temp;

    *ptr1 = *ptr1 + 50;
    *ptr2 = *ptr2 - 30;
    *ptr3 = *ptr3 * 2;

    ptr1 = &c;
    ptr2 = &a;
    ptr3 = &b;

    *ptr1 += 10;
    *ptr2 -= 20;
    *ptr3 *= 2;

    printf("Final values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}
