#include<stdio.h>
int main(void)
{
  int x,p,count=1,a;
  scanf("%d %d",&x,&p);
  a=(p/100)*x; 
  while(x-a)
  {
    count++;
    a=x-((p/100)*x);
    x=x-a;
  }
  printf("%d",count);
  return 0;
}
