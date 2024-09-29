#include <stdio.h>
#include <string.h>

int main() {
  char word[] = "Hello World"; // Enter the string to check the vowel and consonant counter
  
  int vowel_count = 0;
  int cons_count = 0;
  printf("String Lenght: %lu\n", strlen(word)); // Get the length of the string
  
  for (int c = 0; c < strlen(word); c++) {
    if (word[c] == 'a' || word[c] == 'e' || word[c] == 'i' || word[c] == 'o' || word[c] == 'u') {
      vowel_count++;
    }
    else {
      cons_count++;
    }
  }

  printf("Vowel: %d\n", vowel_count);
  printf("Consonants: %d\n", cons_count);
  
  return 0;
}
