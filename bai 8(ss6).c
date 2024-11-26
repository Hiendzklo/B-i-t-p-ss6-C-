#include <stdio.h>
#include <math.h>

int main() {
    double tienGoc, laiSuatTheoThang, soTienNhanDuoc, soTienLai;
    int months;
    printf("Nhap so tien ban dau: ");
    scanf("%lf", &tienGoc);
    printf("Nhap lai suat thang (%%): ");
    scanf("%lf", &laiSuatTheoThang);
    printf("Nhap so thang gui: ");
    scanf("%d", &months);

    laiSuatTheoThang /= 100; 
    soTienNhanDuoc = tienGoc * pow(1 + laiSuatTheoThang, months); // pow la luy~ thua` months lan`
    soTienLai = soTienNhanDuoc - tienGoc; 
    printf("Tien lai: %.3lf\n", soTienLai);
    printf("Tien nhan duoc: %.3lf\n", soTienNhanDuoc);
}

