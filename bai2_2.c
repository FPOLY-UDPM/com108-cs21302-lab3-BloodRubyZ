/******************************************************************************
 * Họ và tên: [Nguyễn Đình Anh Khoa]
 * MSSV:      [PS39836]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
// 2.2 BẬC 2 
// Phương trình có dạng: ax2 + bx + c = 0 
// Input: Nhập vào từ bàn phím: a, b, c 
// Output: Nghiệm của phương trình 
// Biết rằng: 
// Nếu a == 0, phương trình thành bx + c = 0  
// Ngược lại nếu a != 0 
//  Tính delta 
//  Nếu delta < 0: Phương trình vô nghiệm 
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a) 
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt  
// o X1 = (-b + căn(delta))/(2*a) 
// o X2 = (-b – căn(delta))/(2*a)

#include <stdio.h>
#include <math.h> // Thư viện cần thiết để dùng hàm sqrt (tính căn bậc 2)

int main(){
    
    // Khai báo biến
    float a, b, c;
    float delta, x1, x2;

    // Nhập dữ liệu
    printf("Giai phuong trinh bac 2 (ax^2 + bx + c = 0)\n");
    printf("Nhap he so a: "); scanf("%f", &a);
    printf("Nhap he so b: "); scanf("%f", &b);
    printf("Nhap he so c: "); scanf("%f", &c);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    
    // Trường hợp 1: a bằng 0 -> Trở thành phương trình bậc 1: bx + c = 0
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            // Nghiệm của bx + c = 0 là x = -c/b
            printf("Phuong trinh co 1 nghiem don: x = %.2f\n", -c / b);
        }
    } 
    // Trường hợp 2: a khác 0 -> Giải phương trình bậc 2
    else {
        // Tính Delta
        delta = b*b - 4*a*c;

        if (delta < 0) {
            printf("Delta = %.2f < 0 -> Phuong trinh vo nghiem.\n", delta);
        } 
        else if (delta == 0) {
            // Nghiệm kép
            x1 = -b / (2 * a);
            printf("Delta = 0 -> Phuong trinh co nghiem kep x = %.2f\n", x1);
        } 
        else {
            // Delta > 0, có 2 nghiệm phân biệt
            // sqrt(delta) là hàm tính căn bậc 2 của delta
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            
            printf("Delta = %.2f > 0 -> Phuong trinh co 2 nghiem phan biet:\n", delta);
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}