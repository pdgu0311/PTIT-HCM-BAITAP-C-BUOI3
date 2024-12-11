#include <stdio.h>

int main(){
    
  float canhday, chieucao, dientich;
  
   printf("Nhập độ dài cạnh đáy của tam giác: ");
   scanf("%f", &canhday);
   printf("Nhập chiều cao của tam giác: ");
   scanf("%f", &chieucao);
   
   dientich = 0.5 * canhday * chieucao;
   
   printf("Diện tích tam giác: %.2f\n", dientich);

    return 0;
}
