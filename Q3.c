#include <stdio.h>

int analyzeTemperature(int temperature);

int main(){
    int temperature;
    printf("Enter current temperature (in Celsius): ");
    scanf("%d", &temperature);
    
    int code=analyzeTemperature(temperature);
    
    switch(code){
        case 1: printf("\n---HEAT ALERT---\n");
        break;
        case 2: printf("\n---COLD ALERT---\n");
        break;
        case 3: printf("\n---COMFORT ZONE---\n");
        break;
        case 4: printf("\n---NORMAL CONDITIONS---\n");
        break;
    }
    return 0;
}

int analyzeTemperature(int temperature){
    if(temperature>35)
        return 1;
    else if(temperature<10)
        return 2;
    else if(temperature>=15 && temperature<=25)
        return 3;
    else
        return 4;
}
