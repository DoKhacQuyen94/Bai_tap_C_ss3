#include<stdio.h>
int main(){
    float banKinh,chuVi,dienTich;
    const float pi =3.14;
    printf("nhập bán kính hình tròn:");
    scanf("%f",&banKinh);
    chuVi =2*pi*banKinh;
    dienTich = pi*banKinh*banKinh;
    printf("Chu vi hình tròn là: %.2f \n",chuVi);
    printf("Diện tích hình tròn là: %.2f \n",dienTich);
    return 0;
}