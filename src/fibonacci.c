#include <stdio.h>

int fib(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fib(n-1) + fib(n-2);
  }
}

int main() {
  int n = 20; // amount of sequence to do
  int result = fib(n);
  printf("Fibonacci of %d: %d\n", n, result);
  
  return 0;
}
