#include <stdio.h>

int main() {
    int old_reading, new_reading, consumption;
    double total_cost;

    printf("Nhap chi so cong to dien cu: ");
    scanf("%d", &old_reading);
    printf("Nhap chi so cong to dien moi: ");
    scanf("%d", &new_reading);

    // Tinh so dien tieu thu
    if (new_reading < old_reading) {
        printf("Chi so cong to moi khong the nho hon chi so cong to cu!\n");
        return 1;  // Dung chuong trinh neu du lieu khong hop le
    }
    
    consumption = new_reading - old_reading;  // So dien tieu thu trong thang

    // Tinh tien dien theo muc tieu thu
    if (consumption < 50) {
        total_cost = consumption * 10000;  // 10.000 VND/kWh
    } else if (consumption < 100) {
        total_cost = 50 * 10000 + (consumption - 50) * 15000;  // 10.000 VND cho 50 kWh dau, 15.000 VND cho phan con lai
    } else if (consumption < 150) {
        total_cost = 50 * 10000 + 50 * 15000 + (consumption - 100) * 20000;  // 10.000 VND cho 50 kWh dau, 15.000 VND cho 50 kWh tiep theo, 20.000 VND cho phan con lai
    } else if (consumption < 200) {
        total_cost = 50 * 10000 + 50 * 15000 + 50 * 20000 + (consumption - 150) * 25000;  // 10.000 VND cho 50 kWh dau, 15.000 VND cho 50 kWh tiep theo, 20.000 VND cho 50 kWh tiep theo, 25.000 VND cho phan con lai
    } else {
        total_cost = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (consumption - 200) * 30000;  // 10.000 VND cho 50 kWh dau, 15.000 VND cho 50 kWh tiep theo, 20.000 VND cho 50 kWh tiep theo, 25.000 VND cho 50 kWh tiep theo, 30.000 VND cho phan con lai
    }

    // In ra ket qua
    printf("So dien tieu thu trong thang la: %d kWh\n", consumption);
    printf("Tien dien phai tra la: %.2f VND\n", total_cost);

    return 0;
}

