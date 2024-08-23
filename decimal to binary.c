 #include<stdio.h>
 long tobinary(int);
 int main()
{
  long binary;
  int decimal;
  printf("Convert decimal to binary\n");
  printf("Input any decimal number");
  scanf("%d",&decimal);
  binary = tobinary(decimal);
  printf("the binary number is %l\n",binary);
  return 0;
}
   long tobinary(int decimal)
{
   long binary=0,remainder,f=1;
   while(decimal != 0)
  {
    remainder = decimal % 2;
    binary = binary+remainder*f;
    f = f * 10;
    decimal = decimal/2;
  }
   return binary;
}