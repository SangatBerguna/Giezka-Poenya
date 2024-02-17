#include<stdio.h>

void findCommonElements(int A[], int B[], int C[], int lengthA, int lengthB, int lengthC) {
    int i = 0, j = 0, k = 0;

    while (i < lengthA && j < lengthB && k < lengthC) {
        if (A[i] == B[j] && B[j] == C[k]) {
            // Elemen yang sama ditemukan pada ketiga array
            // Lakukan tindakan yang diinginkan, seperti mencetak elemen tersebut
            printf("%d ", A[i]);
            i++;
            j++;
            k++;
        } else if (A[i] < B[j] || A[i] < C[k]) {
            i++;
        } else if (B[j] < A[i] || B[j] < C[k]) {
            j++;
        } else {
            k++;
        }
    }
}

int main() {
    int A[] = {1, 3, 4, 6, 7};
    int B[] = {2, 3, 5, 7};
    int C[] = {3, 4, 7, 9};

    int lengthA = sizeof(A) / sizeof(A[0]);
    int lengthB = sizeof(B) / sizeof(B[0]);
    int lengthC = sizeof(C) / sizeof(C[0]);

    printf("Elemen yang sama pada ketiga array: ");
    findCommonElements(A, B, C, lengthA, lengthB, lengthC);
    printf("\n");

    return 0;
}