#include <stdio.h>

int main(){
    
   float bankinh, chuvi, dientich;
   float PI = 3.14;

    printf("Nhập bán kính hình tròn: ");
    scanf("%f", &bankinh);

// cong thuc
    chuvi = 2 * PI * bankinh; 
    dientich = PI * bankinh * bankinh;    

    printf("Chu vi hình tròn: %.2f\n", chuvi);
    printf("Diện tích hình tròn: %.2f\n", dientich);
    
    return 0;
}
