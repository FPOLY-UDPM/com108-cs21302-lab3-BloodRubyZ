/******************************************************************************
 * Họ và tên: [Nguyễn Đình Anh Khoa]
 * MSSV:      [PS39836]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

#include <stdio.h>

int main() {
    // 1. Khai báo biến
    float soDien;
    float tongTien;
    
    // Khai báo hằng số giá điện (để dễ dàng sửa đổi sau này)
    const int DINH_MUC_1 = 50;      // Định mức bậc 1
    const int GIA_BAC_1  = 1678;    // Giá cho 50 số đầu
    const int GIA_BAC_2  = 1734;    // Giá từ số 51 trở đi

    // 2. Nhập dữ liệu
    printf("--- CHUONG TRINH TINH TIEN DIEN ---\n");
    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%f", &soDien);

    // 3. Kiểm tra tính hợp lệ và Xử lý
    if (soDien < 0) {
        printf("Loi: So dien khong the la so am!\n");
        return 1; // Kết thúc chương trình với mã lỗi (tùy chọn)
    } 
    
    // Tính toán tiền điện
    if (soDien <= DINH_MUC_1) {
        // Trường hợp dùng ít hơn hoặc bằng 50 số
        tongTien = soDien * GIA_BAC_1;
    } else {
        // Trường hợp dùng vượt quá 50 số
        // Tiền = (50 số đầu * giá 1) + (số điện dư ra * giá 2)
        tongTien = (DINH_MUC_1 * GIA_BAC_1) + ((soDien - DINH_MUC_1) * GIA_BAC_2);
    }

    // 4. Hiển thị kết quả
    // %.0f: Hiển thị số tiền làm tròn, không lấy phần thập phân (vì tiền VND thường không dùng hào/xu)
    printf("=> So tien dien phai dong: %.0f VND\n", tongTien);

    return 0;
}