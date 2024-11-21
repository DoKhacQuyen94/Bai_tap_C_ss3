#include <stdio.h>

int main() {
    float canhDay, chieuCao, dienTich;
    printf("Nhập độ dài cạnh đáy của tam giác: ");
    scanf("%f", &canhDay);
    printf("Nhập chiều cao của tam giác: ");
    scanf("%f", &chieuCao);
    dienTich = (canhDay * chieuCao) / 2;
    printf("Diện tích của tam giác với cạnh đáy %.2f và chiều cao %.2f là: %.2f\n", canhDay, chieuCao, dienTich);

    return 0;
}
