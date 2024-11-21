#include <stdio.h>

int main() {
    float celsius, fahrenheit;


    printf("Nhập nhiệt độ theo độ Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    // Hiển thị kết quả
    printf("Nhiệt độ %.2f°C = %.2f°F\n", celsius, fahrenheit);

    return 0;
}
