#include<stdio.h>
int main(void)
{
  int x,p,a,value=0;
  scanf("%d %d",&x,&p);
  a=x*p/100;
  while(a>=1)
  {
      value+=x;
      a=(x*p/100);
      x=x-a;
  }
  printf("%d",value);
  return 0;
}
