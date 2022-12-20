#include<stdio.h>
void fact();
main()
{
  fact()
}
void fact()
{
  int i,n,f=1;
  printf("enter the n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    f=f*i;
  }
  printf("\n factorial=%d",f);
  
  
}
