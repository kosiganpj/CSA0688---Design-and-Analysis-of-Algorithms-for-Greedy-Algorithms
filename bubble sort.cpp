#include <stdio.h>
int main()
{
  int arr[100], n, i,j, swap;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
   }
  for (i = 0 ; i < n  ; i++)
  {
    for (j = 0 ; j < n-i; j++)
    {
      if (arr[j] > arr[j+1]) 
      {
        swap   = arr[j];
        arr[j]  = arr[j+1];
        arr[j+1] = swap;
      }
    }
  }
  printf("Sorted list in ascending order:\n");
  for (i = 0; i < n; i++)
     printf("%d\n", arr[i]);
}
