#include<stdio.h>
int Armstrong(int n1);
int Perfect(int n1);
int main()
{
   int n1;
   printf("check whether the number is Armstrong and perfect");
   printf("Input any number");
   scanf("%d", &n1);
   
   if(Armstrong(n1))
{
    printf("The %d is an Armstrong number\n",n1);
}
   else
 {
   printf("The %d is not an Armstrong number\n",n1);
 }
    if(Perfect(n1))
  {
    printf("The %d is a Perfect number\n",n1)
  }
   else
  {
    printf("The %d is not a perfect number");
  }
   return 0;
}
   int Armstrong(int n1)
{
   int ld,sum,num;
   sum = 0;
   num = n1;
   while(num  != 0)
 {
   ld = num % 10;
   sum += ld * ld * ld;
   num = num/10;
 }
   return(n1 == sum)
  int Perfect(int n1)
{
  int i,sum,num;
  sum=0;
  num=n1;
  for(i=1; i<num; i++)
 {
  if(num%i == 0)
  {
    sum+=i;
   }
}
   return(n1 == sum);
}
   
   
   
