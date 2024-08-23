  #include<stdio.h>
  double square(double num)
{
   return(num*num);
}
  int main()
{
  int num;
  double n;
  printf("To find the square root of any number\n");
  printf("Input any number for square\n");
  scanf("%d",&num);
  n = square(num);
  printf("The square of %d is %f\n",num,n);
  return 0;
}
