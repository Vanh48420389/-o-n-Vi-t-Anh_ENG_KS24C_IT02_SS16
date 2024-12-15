#include <stdio.h>
void capNhatPhanTu(int *arr, int size, int giaTriMoi, int viTri) {
    if (viTri >= 0 && viTri < size) {
        arr[viTri] = giaTriMoi;
    } else {
        printf("Vi tri cap nhat khong hop le\n");
    }
}
void inMang(int *arr, int size){
 
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[] = {6,9,0,2,5,2,7};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    printf("Mang truoc khi cap nhat: ");
    inMang(mang, kichThuoc);
    int giaTriMoi = 4;
    int viTri = 5; 
    capNhatPhanTu(mang, kichThuoc, giaTriMoi, viTri);
    printf("Mang sau khi cap nhat: ");
    inMang(mang, kichThuoc);

    return 0;
}

