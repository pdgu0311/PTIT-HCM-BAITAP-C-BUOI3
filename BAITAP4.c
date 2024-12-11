#include <stdio.h>

int main(){
    
  float toan, van, anh, tong, TB;
  
  printf("nhap diem toan");
  scanf("%f", &toan);
  printf("nhap diem van");
  scanf("%f", &van);
  printf("nhap diem anh");
  scanf("%f", &anh);
  
  tong = toan + van + anh;
  TB = tong/3;
   
    printf("Tổng điểm: %.2f\n", tong);
    printf("Điểm trung bình: %.2f\n", TB);
  
  
    return 0;
}
