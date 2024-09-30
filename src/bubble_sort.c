#include <stdio.h>

int main() {
  int arr[8] = {2, 8, 1, 3, 6, 7, 5, 4};
  int arr_len = sizeof(arr) / sizeof(arr[0]);

  printf("Initial: ");
  for (int i = 0; i < arr_len; i++) {
    printf("%d ", arr[i]);
  }

  for (int i = 0; i < arr_len - 1; i++) {
    for (int j = 0; j < arr_len - i - 1; j++) {
      if (arr[j] > arr[j+1]) {
        // Still don't know why we need a temp var to store it (in python it is not used)
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  printf("\nResult: ");
  for (int i = 0; i < arr_len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
