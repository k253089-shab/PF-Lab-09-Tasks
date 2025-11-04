#include <stdio.h>

void average(int math, int eng, int phy);

int main()
{
    int math, eng, phy, avg;
    printf("Enter marks(0-100 scale):-\n");
    printf("Mathematics: ");
    scanf("%d", &math);
    printf("English: ");
    scanf("%d", &eng);
    printf("Physics: ");
    scanf("%d", &phy);
    
    average(math, eng, phy);

    return 0;
}

void average(int math, int eng, int phy){
    int avg=(math+eng+phy)/3;
    printf("\nAverage marks: %d\n", avg);
    
    if(avg>=50 && math>=40 && eng>=40 && phy>=40){
        printf("\nPASS!\n");
    } else{
        printf("\nFAIL\n");
        if(math<40)
        printf("- Marks below 40 in Mathematics\n");
        if(eng<40)
        printf("- Marks below 40 in English\n");
        if(phy<40)
        printf("- Marks below 40 in Physics\n");
        if(avg<50)
        printf("- Average marks below 50\n");
    }
}
