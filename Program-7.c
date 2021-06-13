//INPUT - 3 1 2 3
//OUTPUT- 3 2 1

//INSERT THE MISSING CODE 
#include<stdio.h>

	int main()
	{
	  int a[100],i,n;

	  printf("Enter size of the array:\n");
	  scanf("%d",&n);
	  
    printf("Enter the array elements:\n");
	  for(i=0;i<n;i++)
    {
      printf("Enter a[%d]:",i);
	    scanf("%d",&a[i]);//missing code
    }

	  for(i=n-1;i>=0;i++)//missing code
    {
	    printf("%d ",a[i]);
    }

	  return(0);
	}
