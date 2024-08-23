#include<stdio.h>
void swap(int *,int *)
int main()
{
  int n1,n2;
  printf("Enter the value of n1 and n2");
  scanf("%d\n%d\n",n1,n2);
  printf("before swaping: n1=%d, n2=%d\n",n1,n2);
  swap(&n1,&n2);
  printf("after swaping: n1=%d,n2=%d\n",n1,n2);
}
void swap(int *p,int *q)
{
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}
  
  