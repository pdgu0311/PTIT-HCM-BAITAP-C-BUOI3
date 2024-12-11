#include <stdio.h>

int main(){
    
   float celsius, fahrenheit;

    printf("Nhập nhiệt độ (°C): ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Nhiệt độ %.1f°C tương đương với %.1f°F\n", celsius, fahrenheit);
    
    return 0;
}
