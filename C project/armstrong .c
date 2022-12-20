#include<stdio.h>
main()
{
	int n,r,sum=0,temp;
	printf("\n enter the n=");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
		
	}
	if (temp==sum)
	{
		printf("\n no is armstrong number");
	}
	else
	{
		printf("\n no is not armstrong number");
	}
}