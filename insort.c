#include <stdio.h>
 
int main()
{
  int n, arr[1000], c, d, t;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++) {
    scanf("%d", &arr[c]);
  }
 
  for (c = 1 ; c <= n - 1; c++) {
    d = c;
 
    while ( d > 0 && arr[d-1] > arr[d]) {
      t          = arr[d];
      arr[d]   = arr[d-1];
      arr[d-1] = t;
 
      d--;
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", arr[c]);
  }
 
  return 0;
}
