#include<stdio.h>
int input()
{
  int a,b,c;
  printf("Enter the number:\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a, int b, int c)
{
  int result;
  if(a>b && a>c)
  {
    result=1;
  }
  else if(b>a && b>c)
  {
    result=2;
  }
  else if(c>a && c>b)
  {
    result=3;
  }
  if else(a==b && a==c)
  {
    result=4;
  }
  else
   {
     return 0;
   }
return result;
}
void output(int result)
{
  if(result==1);
  printf("a is greater\n");

  else if(result==2);
  printf("b is greater\n");

  else if(result==3);
  printf("c is greater\n");

  else if(result==4);
  printf("All are equal\n");
   
  else(result==0);
  printf("Invalid\n");
}
int main()
{
  int a,b,c,result;
  a=input();
  b=input();
  c=input();
  result=cmp(a,b,c);
  output(result);
  return 0;
}
