#include <stdio.h>
#include <stdbool.h>

bool check_prime(int n) {
  for (int i = 2; i <= n/2; i++) {
    if (n % i == 0) {
      return false;
    } 
  }
  return true;
}

int main() {
  int n = 5;
  
  if (check_prime(n)) {
    printf("%d is prime number\n", n);
  } else {
    printf("%d is not prime number\n", n);
  }
  return 0;
}
