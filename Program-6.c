//INPUT -3 1 2 3
//OUTPUT- Total number of even numbers and odd numbers in the array are 1 and 2

//INSERT THE MISSING CODE 
#include<stdio.h>

int main()
{
    int arr[10],i, num, evennum, oddnum;

    // Reads size and elements in array
    printf("Enter the number of elements:\n");
    scanf("%d",&num);

    printf("Enter %d elements of the array:\n ", num);
    for(i=0;i<num;i++)
    {
      printf("Enter arr[%d]:\n",i);
      scanf("%d",&arr[i]);//missing code
    }

    evennum = 0; // Assuming 0 even numbers
    oddnum  = 0; // Assuming 0 odd numbers

    for(i=0; i<num; i++)
    {
        /* If the current element of array is evennumber then increment evennumber count */
        if(arr[i] % 2 == 0) //missing code
        {
            evennum++;
        }
        else if (arr[i] % 2 != 0)
        {
            oddnum++; // increment oddnumber count
        }
    }

printf("Total number of even numbers and odd numbers in the array are %d and %d",evennum,oddnum  );//missing code

return(0);    
}
