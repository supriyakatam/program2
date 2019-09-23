#include <stdio.h>
 
int main()
{
  int c, k;
 
  printf("Enter number of rows\n");
  
 
  for (c = 1; c <= 5; c++)
  {
    for(k = 1; k <= c; k++)
    {
      printf("*");
    }
 
    printf("\n");
  }
 
  return 0;
}
