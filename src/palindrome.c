#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "rotator";
  int string_len = strlen(str);
  char rev[string_len];

  for (int i = 1; string_len >= i; i++) {
    rev[i-1] = str[string_len-i];
  }

  if (strcmp(str, rev) == 0) {
    printf("It is palindrome\n");
  } else {
    printf("Not Palindrome\n");
  }
  
  return 0;
}
