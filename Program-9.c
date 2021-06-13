//linear search 
//INPUT- 4 1 2 3 4 3
//OUTPUT - 3


#include <stdio.h>

int main()
{
  int array[100], search, i, n;

  printf("Enter number of elements in the array:\n");
  scanf("%d", &n);

 printf("Enter the array elements:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);
  }
 
 printf("Enter the element to be searched:\n");
  scanf("%d", &search);

  for (i = 0; i < n; i++)
  {
    if (array[i] == search)    /* If required element is found */
    {
      printf("%d is present at location %d\n", search, i+1);
      break;
    }
  }
  
  if (array[i]!=search)
  {
    printf("%d is not present in the array", search);
  }
 return 0;
}

