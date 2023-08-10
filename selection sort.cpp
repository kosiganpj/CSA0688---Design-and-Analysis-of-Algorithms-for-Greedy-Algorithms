#include <stdio.h>
int main() {
   int arr[10],n=10,i, j, position, swap;
   printf("Enter number of elements\n");
   scanf("%d", &n);
   printf("Enter %d integers\n", n);
   for (i = 0; i < n; i++)
   {
    scanf("%d", &arr[i]);
   }
   for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
    printf("Sorted list in ascending order:\n");
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
   return 0;
}
