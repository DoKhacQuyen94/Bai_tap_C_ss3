#include<stdio.h>
int main(){
    float diemToan,diemVan,diemAnh,sum,ave;
    printf("nhập điểm môn toán:");
    scanf("%f",&diemToan);
    printf("nhập điểm môn văn:");
    scanf("%f",&diemVan);
    printf("nhập điểm môn anh:");
    scanf("%f",&diemAnh);
    sum = diemAnh + diemToan + diemVan;
    ave = sum/3;
    printf("Tổng điểm 3 môn là: %.2f \n",sum);
    printf("Điểm TB 3 môn là: %.2f \n",ave);
    return 0 ;
}