#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target, int *steps) {
    while (low <= high) {
        (*steps)++;
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Return -1 jika data tidak ditemukan
}

int main() {
    int n;

    // Input jumlah data
    printf("Masukkan jumlah data mahasiswa: ");
    scanf("%d", &n);

    int data[n];

    // Input data (asumsi data sudah terurut)
    printf("Masukkan data mahasiswa (terurut):\n");
    for (int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    int target;

    // Input nilai mahasiswa yang dicari
    printf("Masukkan nilai mahasiswa yang dicari: ");
    scanf("%d", &target);

    int steps = 0;
    int position = binarySearch(data, 0, n - 1, target, &steps);

    // Menampilkan hasil
    if (position != -1) {
        printf("Nilai mahasiswa %d ditemukan pada posisi %d.\n", target, position + 1);
        printf("Langkah-langkah pencarian: %d\n", steps);
    } else {
        printf("Nilai mahasiswa %d tidak ditemukan dalam data.\n", target);
    }

    return 0;
}
