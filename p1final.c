#include<stdio.h>
void input(int *a, int *b)
{
  printf("Enter the 2 numbers to be added\n");
  scanf("%d%d",a,b);
}
void add(int a, int b, int *c)
{
  *c=a+b;
}
void output(int a, int b,int c)
{
  printf("%d+%d=%d",a,b,c);
}
int main()
{
  int a,b,c;
  input(&a,&b);
  add(a,b,&c);
  output(a,b,c);
  return 0;
}