//INPUT - 4 1 2 3 4
//OUTPUT - Sum of elements=10


#include <stdio.h>
 
int main()
{
   int a[100],i,sum,n;

   printf("Enter number of elements in the array:");
   scanf("%d", &n);
 
  // printf("Enter %d elements\n", n);
 
   printf("Enter the array elements:\n");
   for (i = 0; i < n; i++)
   {
     printf("Enter a[%d]:\n",i);
      scanf("%d", &a[i]);
      sum=sum+a[i]; 
   }

 printf("Sum of elements=%d", sum);
 
  return 0;
}
