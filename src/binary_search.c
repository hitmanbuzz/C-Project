#include <stdio.h>

int main() {
  int arr[8] = {2, 8, 1, 3, 6, 7, 5, 4}; // Don't compare the result index with this array, instead you use check with the sorted array
  int arr_len = sizeof(arr) / sizeof(arr[0]);
  int target = 6;

  // Sort the array in order to do binary search
  for (int i = 0; i < arr_len - 1; i++) {
    for (int j = 0; j < arr_len - i - 1; j++) {
      if (arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  
  printf("Sorted Array: ");
  for (int i = 0; i < arr_len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  printf("Target: %d\n", target);
  
  int low = 0; // First Index
  int high = arr_len-1; // Last Index
  int index = -1;

  while (high >= low) {
    int mid = low + (high - low) / 2; // Mid Index

    if (arr[mid] == target) {
      index = mid;
      break;
    } else if (arr[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  
  if (index == -1) {
    printf("Target not found\n");
  } else {
    printf("Target found at index: %d\n", index);
  }


  return 0;
}
