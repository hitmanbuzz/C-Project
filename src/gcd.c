/// Write a program to find the greatest common divisor (GCD) of two numbers.
#include <stdio.h>
#include <stdlib.h>

int main() {
  int a = 60;
  int b = 36;
  int counter = 0;
  int index_counter = 0;
  int common_index = 0;
  int *divider_a = malloc(counter * sizeof(int));
  int *divider_b = malloc(counter * sizeof(int));
  int *common_factors = malloc(common_index * sizeof(int)); 
  int *final_result = malloc(common_index * sizeof(int));
   
  for (int i = 1; i <= a; i++) {
     if (a % i == 0) {
       counter++;
       index_counter++;
       divider_a = realloc(divider_a, counter * sizeof(int));
       divider_a[counter- 1] = i;
       // printf("%d element added to A\n", i);
     }   
  }
  
  for (int i = 0; i < index_counter; i++) {
    if (divider_a[i] == common_factors[i]) {
      continue;
    }
    common_index++;
    common_factors = realloc(common_factors, common_index * sizeof(int));
    common_factors[common_index - 1] = divider_a[i];
  }
  
  // for (int i = 0; i < index_counter; i++) {
  //   printf("A divider: %d\n", divider_a[i]);
  // }

  // printf("Common Index A: %d\n", common_index+1);
  
  counter = 0;
  index_counter = 0;
  // printf("\n");
  free(divider_a);
  
  
  for (int j = 1; j <= b; j++) {
    if (b % j == 0) {
      counter++;
      index_counter++;
      divider_b = realloc(divider_b, counter * sizeof(int));
      divider_b[counter- 1] = j;
       // printf("%d element added to B\n", j);
    }
  }


 for (int j = 0; j < index_counter; j++) {
   if (divider_b[j] == common_factors[j]) {
     continue;
   }
   common_index++;
   common_factors = realloc(common_factors, common_index * sizeof(int));
   common_factors[common_index - 1] = divider_b[j];
 }

  free(divider_b);

  // for (int j = 0; j < index_counter; j++) {
  //   printf("B divider: %d\n", divider_b[j]);
  // }

  // printf("Common Index B: %d\n", common_index+1);
  int count = 0;

  for (int k = 0; k < common_index; k++) {
    if (a % common_factors[k] == 0 && b % common_factors[k] == 0) {
      // printf("Divider for A & B: %d\n", common_factors[k]);
      final_result = realloc(final_result, common_index * sizeof(int));
      final_result[count] = common_factors[k];
      count++;
    }
  }

  for (int p = 0; p < count; p++) {
    if (count > p+1) {
      if (final_result[p] > final_result[p+1]) {
        final_result[p+1] = final_result[p];
      } 
    }
  }

  printf("Result: %d\n", common_factors[count-1]);
  free(final_result);  
  free(common_factors);

  return 0;
}
