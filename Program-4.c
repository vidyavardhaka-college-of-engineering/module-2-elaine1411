//Program to sum odd numbers from 1 to 10
//INPUT- 10
//OUTPUT-25

#include <stdio.h>
int main ()
{
 int sum = 0,i,n;
 
//Fill the missing code
 printf("Enter the upper limit:\n");
 scanf("%d",&n);

 //Fill the missing code
for(i=1;i<=n;i++)
 {
   
   if ( i % 2 != 0 )
   {
     sum=sum+i;
     continue;
   }
   else if (i % 2 == 0)
   {
     continue;
   }
 }
   
//Fill the missing code
printf("%d",sum);
 return 0;
}


