//INPUT- 4 10 20 20 30 20
//OUTPUT - The number of times the  key element  is repeated  is 2
#include<stdio.h>

int main()
{
  int n,i,key,a[10],c=0;

  printf("Enter size of the array:\n");
  scanf("%d",&n);

  printf("Enter array elements:\n");
  for(i=0;i<n;i++)//missing code
  {
    scanf("%d",&a[i]);//missing code
  }

  printf("Enter an integer value :\n ");
  scanf("%d",&key);
  
    for(i=0;i<n;i++)
    {
      if(key==a[i]) //missing code
      {
        //flag=1;
        c++;
      }
      else
      {
        continue;
      }
    }

   printf("The number of times the  key element  is repeated  is %d",c);//missing code
  
    return(0);
}

