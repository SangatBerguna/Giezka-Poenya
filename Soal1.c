#include <stdio.h>

void findThreeLargest(int arr[], int n) {
    if (n < 3) {
        printf("Array tidak memiliki cukup elemen untuk menemukan tiga terbesar.\n");
        return;
    }

    int first, second, third;
    first = second = third = arr[0];

    // Mencari tiga elemen terbesar
    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != first && arr[i] != second) {
            third = arr[i];
        }
    }

    // Menampilkan hasil
    printf("Tiga elemen terbesar dalam array adalah: %d, %d, %d\n", first, second, third);
}

int main() {
    int n;

    // Input jumlah elemen dalam array
    printf("Masukkan jumlah elemen dalam array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elemen array
    printf("Masukkan elemen array:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemen ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Memanggil fungsi untuk mencari tiga elemen terbesar
    findThreeLargest(arr, n);

    return 0;
}
