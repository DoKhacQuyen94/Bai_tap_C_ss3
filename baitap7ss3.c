#include <stdio.h>

int main() {
   int number, sum, reverse,soHangNghin,soHangTram,soHangChuc,soHangDonVi;
   printf("Nhập số nguyên có 4 chữ số: ");
   scanf("%d",&number);
   soHangNghin = number/1000;
   soHangTram = (number/100)%10;
   soHangChuc = (number/10)%10;
   soHangDonVi = number %10;
   sum=soHangNghin+soHangTram+soHangChuc+soHangDonVi;
   reverse = soHangDonVi*100+soHangChuc*100+soHangTram*10+soHangNghin;
   printf("Số người dùng nhập vào là: %d\n",nnumber);
   printf("Tổng các số của số %d là: %d \n",number,sum);
   printf("Só đảo ngược của số %d là: %d \n",number, reverse);
   return 0;
}

