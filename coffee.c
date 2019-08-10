#include<stdio.h>
int main(void)
{
  int x,p,count=1,a,value=0;
  scanf("%d %d",&x,&p);
  a=(p/100)*x; 
  value=value+x
  while(x-a)
  {
    a=x-((p/100)*x);
    x=x-a;
    value=value+x;
  }
  printf("%d",value);
  return 0;
}
