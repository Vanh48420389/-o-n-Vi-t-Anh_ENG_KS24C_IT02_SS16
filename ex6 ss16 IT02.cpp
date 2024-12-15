#include <stdio.h>
int timKiemPhanTu(int *arr, int size, int giaTriTimKiem) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == giaTriTimKiem) {
            return i+1; 
        }
    }
}

int main() {
   
    int mang[] = {5,8,0,2,6,7,3,6};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    int giaTriCanTim = 5;
    int viTri = timKiemPhanTu(mang, kichThuoc, giaTriCanTim);
    if (viTri !=0) {
        printf("Gia tri %d duoc tim thay o vi tri thu %d\n", giaTriCanTim, viTri);
    } else {
        printf("Gia tri %d khong duoc tim thay trong mang\n", giaTriCanTim);
    }

    return 0;
}

