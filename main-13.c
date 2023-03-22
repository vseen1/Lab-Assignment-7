#include <stdio.h>

int main(void) {
  
  int arr[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
  int i, j;
  int counter = 0;

  for (i = 0; i < 9 - 1; i++)
    {
      int counter = 0;
      for (j = 0; j < 9 - i - 1; j++)
        {
          if (arr[j] > arr[j+1])
          {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            counter++;
          }
        }
      printf("pass %d: %d\n", i + 1, counter);
    }

 

 
  
  return 0;
}