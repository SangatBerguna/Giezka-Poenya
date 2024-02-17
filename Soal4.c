#include <stdio.h>

int main() {
    int n;

    // Input jumlah data
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    // Deklarasi array dengan ukuran n
    int data[n];

    // Input data dari pengguna menggunakan perulangan
    printf("Masukkan data:\n");
    for (int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    // Mengurutkan array (misalnya dengan algoritma quicksort)
    // (Pengurutan dapat diabaikan jika nilai tengah tidak memerlukan array terurut)
    // Pilih algoritma pengurutan yang sesuai kebutuhan
    // ...

    // Menghitung jumlah, rata-rata, dan nilai tengah
    int sum = 0;
    float average;
    int middle;

    for (int i = 0; i < n; i++) {
        sum += data[i];
    }

    average = (float)sum / n;

    // Jika jumlah data ganjil, ambil nilai tengah
    if (n % 2 != 0) {
        middle = data[n / 2];
    }
    // Jika jumlah data genap, ambil rata-rata dari dua nilai tengah
    else {
        middle = (data[n / 2 - 1] + data[n / 2]) / 2;
    }

    // Menampilkan hasil
    printf("\nHasil:\n");
    printf("Jumlah: %d\n", sum);
    printf("Rata-rata: %.2f\n", average);
    printf("Nilai Tengah: %d\n", middle);

    return 0;
}
