#include<stdio.h>
#define max 100

int findMaxEle(int[]);
int n;

int main()
{
  int array[max],maxele,i;
  printf("get largest element of array");
  printf("Input the number of elements to be stored  in the array\n");
  scanf("%d",&n);
  printf("Input the %d elements in the array");
  for(i=0;i<n;i++)
{
  printf("elements - %d",i);
  scanf("%d",&arr[i]);
}
   ele = findMaxEle(arr);
   printf("The largest element in the array is %d\n",maxele);
   return 0;
}
   int i=1,maaxele;
   maxele = arr[0];
   while(i<n)
  {
    if(maxele<arr[i])
       maxele=arr[i];
     i++;
  }
     return maxele;
}