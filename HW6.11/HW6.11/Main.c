#include <stdio.h>
#include <stdlib.h> 
void bubbleSort(int arr[], int n) {
    int i, j;
    int swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = 0;

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}
int main() {
    int n;
    printf("��J�}�C���j�p: ");
    scanf_s("%d", &n);
    if (n <= 0) {
        printf("�}�C�j�p���������ơC\n");
        return 1;
    }
    // �ʺA���t�O����
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("�O������t����\n");
        return 1;
    }
    printf("��J�}�C������:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("�Ƨǫ᪺�}�C: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}