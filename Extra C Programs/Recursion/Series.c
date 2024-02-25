#include<stdio.h>
#include<math.h>
float rec_call(int x, int n) {
  static float sum;
  if (n == 1)
    return sum + x;
  if (n % 2 == 0) {
    sum = sum - (pow(x, (2 * n) - 1) / fact((2 * n) - 1));
  } else {
    sum = sum + (pow(x, (2 * n) - 1) / fact((2 * n) - 1));
  }
  rec_call(x, --n);
}
int fact(int n) {
  if (n == 1) {
    return 1;
  }
  return n * fact(n - 1);
}
void main() {
  int n, x;
  float sum = 0;
  printf("Enter Value of X :");
  scanf("%d", &x);
  printf("Enter no. of terms :");
  scanf("%d", &n);
  sum = rec_call(x,n);
  printf("Sum of Series = %f", sum);
}