/******************************************************************************
 * Họ và tên: [Nguyễn Đình Anh Khoa]
 * MSSV:      [PS39836]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>
#include <stdlib.h> // Thư viện để dùng lệnh exit(0)

int main() {
    // 1. Khai báo biến dùng cho Menu
    int luaChon;

    // Sử dụng vòng lặp do-while để menu hiện lại sau khi làm xong 1 bài
    do {
        // --- HIỂN THỊ MENU ---
        printf("\n================ MENU CHUONG TRINH ================\n");
        printf("1. Bai 1: Tinh diem trung binh va Xep loai\n");
        printf("2. Bai 2: Giai phuong trinh bac 1 (ax + b = 0)\n");
        printf("3. Bai 3: Tinh tien dien (2 bac gia)\n");
        printf("0. Thoat chuong trinh\n");
        printf("===================================================\n");
        
        // 2. Nhập dữ liệu (Chọn chức năng)
        printf("Moi ban chon chuc nang (0-3): ");
        scanf("%d", &luaChon);
        
        printf("\n"); // Xuống dòng cho đẹp

        // 3. Xử lý logic bằng Switch-case
        switch (luaChon) {
            case 1: {
                // --- BÀI 1: TÍNH ĐIỂM TRUNG BÌNH ---
                printf("--- BAI 1: TINH DIEM TRUNG BINH ---\n");
                break;
            }

            case 2: {
                // --- BÀI 2: GIẢI PHƯƠNG TRÌNH BẬC 1 ---
                printf("--- BAI 2: GIAI PHUONG TRINH BAC 1 (ax + b = 0) ---\n");
                break;
            }

            case 3: {
                // --- BÀI 3: TÍNH TIỀN ĐIỆN (Code cũ của bạn) ---
                printf("--- BAI 3: TINH TIEN DIEN ---\n");
                break;
            }

            case 0:
                printf("Da thoat chuong trinh. Tam biet!\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }

    } while (luaChon != 0); // Lặp lại nếu người dùng chưa chọn 0

    return 0;
}