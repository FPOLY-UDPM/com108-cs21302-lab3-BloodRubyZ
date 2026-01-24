/******************************************************************************
 * Họ và tên: [Nguyễn Đình Anh Khoa]
 * MSSV:      [PS39836]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
//  2.1 BẬC 1 
//  Phương trình có dạng ax + b = 0 
//  Input: nhập vào từ bàn phím giá trị của a, b 
//  Output: Hiển thị nghiệm của phương trình 
//  Biết rằng: 
//  Nếu a == 0,  
//   b == 0: Phương trình có vô số nghiệm 
//   b != 0: Phương trình vô nghiệm 
//  Ngược lại: Phương trình có nghiệm x = -b/a 
 
#include <stdio.h>

int main(){
    
    // Khai báo biến
    float a, b;
    float x; // Biến dùng để lưu nghiệm

    // Nhập dữ liệu
    printf("Chuong trinh giai phuong trinh bac 1 (ax + b = 0)\n");
    
    printf("Nhap he so a: ");
    scanf("%f", &a);
    
    printf("Nhap he so b: ");
    scanf("%f", &b);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (a == 0) {
        // Trường hợp a bằng 0, ta xét tiếp b
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem.\n");
        } else {
            // a = 0 nhưng b khác 0 (ví dụ 0x + 5 = 0 => Vô lý)
            printf("Phuong trinh vo nghiem.\n");
        }
    } else {
        // Trường hợp a khác 0, phương trình có 1 nghiệm duy nhất
        x = -b / a;
        printf("Phuong trinh co nghiem x = %.2f\n", x);
    }

    return 0;
}