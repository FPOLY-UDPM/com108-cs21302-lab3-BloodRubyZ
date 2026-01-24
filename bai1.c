/******************************************************************************
 * Họ và tên: [Nguyễn Đình Anh Khoa]
 * MSSV:      [PS39836]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC  
// Input: Nhập vào điểm của sinh viên (0-10) 
// Output: Hiển thị ra màn hình học lực của sinh viên 
// Biết rằng: 
// Học lực xuất sắc: Điểm >= 9 
// Học lực giỏi: 9 > điểm >= 8 
// Học lực khá: 8 > điểm >= 6.5 
// Học lực trung bình: 6.5 > điểm >= 5 
// Học lực yếu: 5 > điểm >= 3.5 
// Học lực kém: 3.5 > điểm

#include <stdio.h>

int main(){

    // Khai báo biến
    float diem;

    // Nhập dữ liệu
    printf("Moi nhap diem cua sinh vien (0-10): ");
    scanf("%f", &diem);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    /* Kiểm tra xem điểm nhập vào có hợp lệ (từ 0 đến 10) hay không */
    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le! Vui long nhap diem tu 0 den 10.\n");
    } 
    /* Bắt đầu xét học lực từ cao xuống thấp */
    else if (diem >= 9) {
        printf("Hoc luc: Xuat sac\n");
    } 
    else if (diem >= 8) {
        // Nếu chạy vào đây nghĩa là điểm < 9 và điểm >= 8
        printf("Hoc luc: Gioi\n");
    } 
    else if (diem >= 6.5) {
        // Nếu chạy vào đây nghĩa là điểm < 8 và điểm >= 6.5
        printf("Hoc luc: Kha\n");
    } 
    else if (diem >= 5) {
        // Nếu chạy vào đây nghĩa là điểm < 6.5 và điểm >= 5
        printf("Hoc luc: Trung binh\n");
    } 
    else if (diem >= 3.5) {
        // Nếu chạy vào đây nghĩa là điểm < 5 và điểm >= 3.5
        printf("Hoc luc: Yeu\n");
    } 
    else {
        // Trường hợp còn lại: điểm < 3.5
        printf("Hoc luc: Kem\n");
    }

    return 0;
}