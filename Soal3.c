#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        // Memanggil quicksort rekursif pada sub-array sebelah kiri dan kanan dari pivot
        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
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

    // Memanggil fungsi quicksort
    quicksort(arr, 0, n - 1);

    // Menampilkan hasil array yang sudah diurutkan
    printf("\nArray setelah diurutkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
