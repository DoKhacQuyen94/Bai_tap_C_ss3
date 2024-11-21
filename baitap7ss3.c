#include <stdio.h>

int main() {
   int numb1, numb2, numb3, numb4, sum;

   printf("nhập numb1 : ");
   scanf("%d", &numb1);
   printf("nhập numb2 : ");
   scanf("%d", &numb2);
   printf("nhập numb3 : ");
   scanf("%d", &numb3);
   printf("nhập numb4 : ");
   scanf("%d", &numb4);
   
   sum=numb1+numb2+numb3+numb4;
   
   printf("Tổng 4 số là: %.d\n", sum);
   return 0;
}

