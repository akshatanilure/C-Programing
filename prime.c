#include<stdio.h>
int PrimeOrNot(int);
int main()
{
   int n1,prime;
   printf("check whether a number is prime or not\n");
   printf("Input value of n1\n");
   scanf("%d",&n1);
   prime = PrimeOrNot(n1);
   if(prime==1)
      printf("the number %d is a prime number\n",n1);
   else
      printf("the number %d is not a prime number\n",n1);
   return 0;
}
  
   int PrimeOrNot(int n1)
 {
   int i=2;
   while(i<=n1/2)
   {  
      if(n1%i==0)
       return 0;
      else
       i++;
    }
    return 1;
}
